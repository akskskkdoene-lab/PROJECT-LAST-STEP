#include "BackendLast.h"
#include "VaRestSubsystem.h"
#include "Engine/Engine.h"

FString UBackendLast::GetBaseURL()
{
	// Твой исправленный ID проекта: jdmlqeywkxfvoqqbypry
	return TEXT("https://jdmlqeywkxfvoqqbypry.supabase.co/rest/v1/rpc/");
}

FString UBackendLast::GetApiKey()
{
	// Твой JWT токен
	return TEXT("eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6ImpkbWxxZXl3a3hmdm9xcWJ5cHJ5Iiwicm9sZSI6ImFub24iLCJpYXQiOjE3NzcxNDEwNzcsImV4cCI6MjA5MjcxNzA3N30.K-JRqEq08N-_9TwvKigXaUtHXOLHgbTs3US7HSQWdcw");
}

void UBackendLast::SendRequest(FString FunctionName, UVaRestJsonObject* Parameters)
{
	if (!GEngine) return;

	UVaRestSubsystem* VaRestSubsystem = GEngine->GetEngineSubsystem<UVaRestSubsystem>();
	UVaRestRequestJSON* Request = VaRestSubsystem->ConstructVaRestRequestExt(EVaRestRequestVerb::POST, EVaRestRequestContentType::json);

	if (!Request) return;

	// Привязываем события
	Request->OnRequestComplete.AddDynamic(this, &UBackendLast::OnWebRequestCompleted);
	Request->OnRequestFail.AddDynamic(this, &UBackendLast::OnWebRequestFailed);

	// Устанавливаем заголовки
	FString Key = GetApiKey();
	Request->SetHeader(TEXT("apikey"), Key);
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *Key));

	// Передаем параметры (тело запроса)
	if (Parameters)
	{
		Request->SetRequestObject(Parameters);
	}

	// Отправляем
	FString FullURL = GetBaseURL() + FunctionName;
	Request->ProcessURL(FullURL);
}

void UBackendLast::OnWebRequestCompleted(UVaRestRequestJSON* Request)
{
	if (Request && Request->GetResponseObject())
	{
		UVaRestJsonObject* Json = Request->GetResponseObject();
		// Если в ответе от SQL функции есть success: true
		if (Json->HasField(TEXT("success")) && Json->GetBoolField(TEXT("success")))
		{
			OnSuccess.Broadcast(Json, TEXT("Request Successful"));
		}
		else
		{
			OnFailure.Broadcast(Json, TEXT("Business Logic Error"));
		}
	}
	else
	{
		OnFailure.Broadcast(nullptr, TEXT("Empty Response"));
	}
}

void UBackendLast::OnWebRequestFailed(UVaRestRequestJSON* Request)
{
	OnFailure.Broadcast(nullptr, TEXT("Network or API Key Error"));
}