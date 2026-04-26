#pragma once
#include "CoreMinimal.h"
#include "ERewardableActions.generated.h"

UENUM(BlueprintType)
enum class ERewardableActions : uint8 {
    PuzzleCompleted,
    PlayersRevived,
    PlayersExtracted,
    ToyPartCarried,
    ToyPartDeposited,
    TimeSurvived,
    EscapedOnTrain,
    TeamWinStatus_1,
    TeamWinStatus_2,
    TeamWinStatus_3,
    PlayersDowned,
    PlayersDeposited,
    KillsDCs,
    ToyPartsRemaining,
};

