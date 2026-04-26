#pragma once
#include "CoreMinimal.h"
#include "EMommyStatistics.generated.h"

UENUM(BlueprintType)
enum class EMommyStatistics : uint8 {
    Wins,
    Losses,
    Win_Loss_Ratio,
    Downs,
    Attack_Accuracy,
    Attacks_Hit,
    Punches,
    Spotter_Uses,
    Webs_Shot,
    Webs_Hit,
    Distance_Wall_Climbed,
    Num_Times_Jumped,
    Players_Put_In_Wuggy_Holes,
    Players_Killed_By_Your_Wuggies,
    Last,
};

