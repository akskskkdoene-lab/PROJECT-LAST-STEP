#pragma once
#include "CoreMinimal.h"
#include "EPlayerStatistics.generated.h"

UENUM(BlueprintType)
enum class EPlayerStatistics : uint8 {
    Wins,
    Losses,
    Win_Loss_Ratio,
    Total_Hand_Uses,
    Left_Hand_Uses,
    Right_Hand_Uses,
    Distance_Travelled,
    Distance_Carried_By_Monster,
    Number_Rolls,
    Toy_Parts_Picked_Up,
    Toy_Parts_Deposited,
    Toys_Loaded_On_Train,
    Train_Call_Uses,
    Hide_Boxes_Used,
    Wuggies_Smacked,
    Best_Puzzle,
    Total_Puzzles_Solved,
    Piano_Puzzles_Solved,
    Memory_Puzzles_Solved,
    Reaction_Puzzles_Solved,
    Total_Puzzles_Failed,
    Piano_Puzzles_Failed,
    Memory_Puzzles_Failed,
    Reaction_Puzzles_Failed,
    Players_Rescued,
    Times_Rescued,
    Deaths_By_Wuggy,
    Downs_By_Huggy,
    Downs_By_Mommy,
    Downs_By_Boxy,
    Times_Spotted_By_Baby_Huggy,
    Times_Grabbed_By_Boxy,
    Number_Webs_From_Mommy,
    Birds_Flipped,
    Number_Times_Jumped,
    Last,
};

