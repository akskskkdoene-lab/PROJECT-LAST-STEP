#pragma once
#include "CoreMinimal.h"
#include "EHuggyStatistics.generated.h"

UENUM(BlueprintType)
enum class EHuggyStatistics : uint8 {
    Wins,
    Losses,
    Win_Loss_Ratio,
    Downs,
    Attack_Accuracy,
    Attacks_Hit,
    Distance_Charged,
    Players_Hugged,
    Baby_Huggies_Placed,
    Baby_Huggies_Triggered,
    Left_Hand_Punches,
    Right_Hand_Punches,
    Num_Times_Jumped,
    Players_Put_In_Wuggy_Holes,
    Players_Killed_By_Your_Wuggies,
    Last,
};

