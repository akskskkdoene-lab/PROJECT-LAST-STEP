#pragma once
#include "CoreMinimal.h"
#include "EMatchResult.generated.h"

UENUM(BlueprintType)
enum class EMatchResult : uint8 {
    None,
    HostLeft,
    MonsterLeft,
    PlayersWon,
    MonsterWon,
    TotalSurvival,
    Survival,
    Massacre,
    TotalMassacre,
    TimeRanOut,
};

