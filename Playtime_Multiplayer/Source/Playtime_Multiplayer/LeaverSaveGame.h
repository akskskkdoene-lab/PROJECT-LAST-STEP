#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "GameFramework/SaveGame.h"
#include "LeaverSaveGame.generated.h"

UCLASS(Blueprintable)
class PLAYTIME_MULTIPLAYER_API ULeaverSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime LastPunishment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    ULeaverSaveGame();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Does12HourPunishmentExist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ComparePunishmentLevel(FTimespan& TimeLeft) const;
    
};

