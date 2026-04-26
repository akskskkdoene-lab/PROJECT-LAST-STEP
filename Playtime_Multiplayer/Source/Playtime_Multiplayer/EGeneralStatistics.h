#pragma once
#include "CoreMinimal.h"
#include "EGeneralStatistics.generated.h"

UENUM(BlueprintType)
enum class EGeneralStatistics : uint8 {
    Games_Played,
    Wins,
    Losses,
    Win_Loss_Ratio,
    Number_Times_Jumped,
    Last,
};

