#include "BackendLast.h"
#include "Engine/Engine.h"

UBackendLast* UBackendLast::GetPlayerData(UObject* WorldContextObject, FString InSteamID)
{
    UBackendLast* Node = NewObject<UBackendLast>();
    Node->WorldContextObject = WorldContextObject;
    Node->SteamID = InSteamID; // Берем ID из параметров
    Node->RequestType = EBackendLastRequestType::GetPlayerData;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

UBackendLast* UBackendLast::PurchaseItem(
    UObject* WorldContextObject,
    FString InSteamID,
    FString InCurrencyType,
    int32 InItemID,
    FString InItemName,
    int32 InPrice)
{
    UBackendLast* Node = NewObject<UBackendLast>();
    Node->WorldContextObject = WorldContextObject;
    Node->SteamID = InSteamID;
    Node->RequestType = EBackendLastRequestType::PurchaseItem;
    Node->CurrencyType = InCurrencyType;
    Node->ItemID = InItemID;
    Node->ItemName = InItemName;
    Node->Price = InPrice;
    Node->RegisterWithGameInstance(WorldContextObject);
    return Node;
}

void UBackendLast::Activate()
{
    if (SteamID.IsEmpty())
    {
        OnFailure.Broadcast(nullptr);
        SetReadyToDestroy();
        return;
    }

    if (RequestType == EBackendLastRequestType::GetPlayerData)
    {
        SendGetPlayerData();
    }
    else
    {
        SendPurchaseItem();
    }
}

FString UBackendLast::GetSupabaseURL()
{
    return TEXT("https://ybffxjpnvgbbkqnmvodo.supabase.co/rest/v1/rpc/");
}

FString UBackendLast::GetAnonKey()
{
    return TEXT("sb_publishable_5CPGGILi5Kf7D9--k_hnQg_QPz33jtu");
}

void UBackendLast::SendGetPlayerData()
{
    if (!GEngine) return;
    UVaRestSubsystem* Subsystem = GEngine->GetEngineSubsystem<UVaRestSubsystem>();
    ActiveRequest = Subsystem ? Subsystem->ConstructVaRestRequestExt(EVaRestRequestVerb::POST, EVaRestRequestContentType::json) : nullptr;

    if (!ActiveRequest) { OnFailure.Broadcast(nullptr); SetReadyToDestroy(); return; }

    ActiveRequest->OnRequestComplete.AddDynamic(this, &UBackendLast::HandleRequestComplete);
    ActiveRequest->OnRequestFail.AddDynamic(this, &UBackendLast::HandleRequestFail);
    FString AuthValue = FString::Printf(TEXT("Bearer %s"), *GetAnonKey());
    ActiveRequest->SetHeader(TEXT("apikey"), GetAnonKey());
    ActiveRequest->SetHeader(TEXT("Authorization"), AuthValue);
    UVaRestJsonObject* Json = Subsystem->ConstructVaRestJsonObject();
    Json->SetStringField(TEXT("p_steam_id"), SteamID);
    ActiveRequest->SetRequestObject(Json);
    ActiveRequest->ProcessURL(GetSupabaseURL() + TEXT("check_or_create_player"));
}

void UBackendLast::SendPurchaseItem()
{
    if (!GEngine) return;
    UVaRestSubsystem* Subsystem = GEngine->GetEngineSubsystem<UVaRestSubsystem>();
    ActiveRequest = Subsystem ? Subsystem->ConstructVaRestRequestExt(EVaRestRequestVerb::POST, EVaRestRequestContentType::json) : nullptr;

    if (!ActiveRequest) { OnFailure.Broadcast(nullptr); SetReadyToDestroy(); return; }

    ActiveRequest->OnRequestComplete.AddDynamic(this, &UBackendLast::HandleRequestComplete);
    ActiveRequest->OnRequestFail.AddDynamic(this, &UBackendLast::HandleRequestFail);
    ActiveRequest->SetHeader(TEXT("apikey"), GetAnonKey());
    ActiveRequest->SetHeader(TEXT("Authorization"), FString(TEXT("Bearer ")) + GetAnonKey());

    UVaRestJsonObject* Json = Subsystem->ConstructVaRestJsonObject();
    Json->SetStringField(TEXT("p_steam_id"), SteamID);
    Json->SetStringField(TEXT("p_currency_type"), CurrencyType);
    Json->SetBoolField(TEXT("p_is_bundle"), false);
    Json->SetNumberField(TEXT("p_item_id"), ItemID);
    Json->SetStringField(TEXT("p_item_name"), ItemName);
    Json->SetNumberField(TEXT("p_price"), Price);
    Json->SetArrayField(TEXT("p_new_items"), TArray<UVaRestJsonValue*>());

    ActiveRequest->SetRequestObject(Json);
    ActiveRequest->ProcessURL(GetSupabaseURL() + TEXT("verify_and_purchase"));
}

void UBackendLast::HandleRequestComplete(UVaRestRequestJSON* Request)
{
    if (Request && Request->GetResponseObject())
    {
        UVaRestJsonObject* Response = Request->GetResponseObject();
        if (Response->HasField(TEXT("success")) && Response->GetBoolField(TEXT("success")))
            OnSuccess.Broadcast(Response);
        else OnFailure.Broadcast(Response);
    }
    else OnFailure.Broadcast(nullptr);
    SetReadyToDestroy();
}

void UBackendLast::HandleRequestFail(UVaRestRequestJSON* Request)
{
    OnFailure.Broadcast(Request ? Request->GetResponseObject() : nullptr);
    SetReadyToDestroy();
}