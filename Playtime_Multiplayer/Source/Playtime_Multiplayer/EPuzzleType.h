#pragma once
#include "CoreMinimal.h"
#include "EPuzzleType.generated.h"

UENUM(BlueprintType)
enum class EPuzzleType : uint8 {
    None,
    Piano,
    Reflex,
    Memory,
    Maze,
    Claw,
    Collage,
};

