#pragma once
#include "CoreMinimal.h"
#include "EMonsterStatistics.generated.h"

UENUM(BlueprintType)
enum class EMonsterStatistics : uint8 {
    Wins,
    Losses,
    Win_Loss_Ratio,
    Downs,
    Attack_Accuracy,
    Attacks_Hit,
    Players_Put_In_Wuggy_Holes,
    Players_Killed_By_Your_Wuggies,
    Last,
};

