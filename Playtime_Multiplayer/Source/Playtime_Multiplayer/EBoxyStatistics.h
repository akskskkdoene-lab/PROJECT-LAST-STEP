#pragma once
#include "CoreMinimal.h"
#include "EBoxyStatistics.generated.h"

UENUM(BlueprintType)
enum class EBoxyStatistics : uint8 {
    Wins,
    Losses,
    Win_Loss_Ratio,
    Downs,
    Attack_Accuracy,
    Attacks_Hit,
    Punches,
    Leaps,
    Distance_Leaped,
    Grab_Accuracy,
    Successful_Grabs,
    Grab_Attempts,
    Time_Spent_In_Box,
    Num_Times_Jumped,
    Players_Put_In_Wuggy_Holes,
    Players_Killed_By_Your_Wuggies,
    Last,
};

