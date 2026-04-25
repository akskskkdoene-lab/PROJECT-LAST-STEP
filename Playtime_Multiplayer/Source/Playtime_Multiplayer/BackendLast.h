#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VaRestRequestJSON.h"
#include "VaRestJsonObject.h"
#include "BackendLast.generated.h"

// Делегаты с параметрами: возвращаем сам JSON объект и строку сообщения (если нужно)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSupabaseCallback, UVaRestJsonObject*, JsonData, const FString&, Message);

UCLASS(Blueprintable, BlueprintType)
class PLAYTIME_MULTIPLAYER_API UBackendLast : public UObject
{
	GENERATED_BODY()

public:
	// События для Блупринта
	UPROPERTY(BlueprintAssignable, Category = "Supabase|Events")
		FOnSupabaseCallback OnSuccess;

	UPROPERTY(BlueprintAssignable, Category = "Supabase|Events")
		FOnSupabaseCallback OnFailure;

	// Основная функция запроса
	UFUNCTION(BlueprintCallable, Category = "Supabase|Actions")
		void SendRequest(FString FunctionName, UVaRestJsonObject* Parameters);

private:
	// Обработчики ответа VaRest
	UFUNCTION()
		void OnWebRequestCompleted(UVaRestRequestJSON* Request);

	UFUNCTION()
		void OnWebRequestFailed(UVaRestRequestJSON* Request);

	// Служебные данные
	static FString GetBaseURL();
	static FString GetApiKey();
};