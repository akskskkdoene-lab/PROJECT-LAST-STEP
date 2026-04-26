#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MatchData.h"
#include "PlayerData.h"
#include "SessionData.h"
#include "HostMigrationData.generated.h"

UCLASS(Blueprintable)
class PLAYTIME_MULTIPLAYER_API UHostMigrationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionData SessionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchData MatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerData> PlayerData;
    
    UHostMigrationData();

    UFUNCTION(BlueprintCallable)
    int32 GetExpectedPlayerCount();
    
    UFUNCTION(BlueprintCallable)
    void ClearSaveData();
    
};

