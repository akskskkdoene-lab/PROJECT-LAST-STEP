#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"

// Только VaRest
#include "VaRestRequestJSON.h"
#include "VaRestSubsystem.h"
#include "VaRestJsonObject.h"

#include "BackendLast.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSupabaseResponse, UVaRestJsonObject*, Result);

UENUM(BlueprintType)
enum class EBackendLastRequestType : uint8
{
    GetPlayerData,
    PurchaseItem
};

UCLASS()
class PLAYTIME_MULTIPLAYER_API UBackendLast : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
        FOnSupabaseResponse OnSuccess;

    UPROPERTY(BlueprintAssignable)
        FOnSupabaseResponse OnFailure;

    // Добавил входной параметр SteamID напрямую в ноды
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "BackendLast|Supabase")
        static UBackendLast* GetPlayerData(UObject* WorldContextObject, FString InSteamID);

    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "BackendLast|Supabase")
        static UBackendLast* PurchaseItem(
            UObject* WorldContextObject,
            FString InSteamID,
            FString CurrencyType,
            int32 ItemID,
            FString ItemName,
            int32 Price
        );

    virtual void Activate() override;

private:
    UPROPERTY()
        UObject* WorldContextObject = nullptr;

    UPROPERTY()
        UVaRestRequestJSON* ActiveRequest = nullptr;

    FString SteamID;
    FString CurrencyType;
    FString ItemName;
    int32 ItemID = 0;
    int32 Price = 0;

    EBackendLastRequestType RequestType = EBackendLastRequestType::GetPlayerData;

    void SendGetPlayerData();
    void SendPurchaseItem();

    UFUNCTION()
        void HandleRequestComplete(UVaRestRequestJSON* Request);

    UFUNCTION()
        void HandleRequestFail(UVaRestRequestJSON* Request);

    static FString GetSupabaseURL();
    static FString GetAnonKey();
};