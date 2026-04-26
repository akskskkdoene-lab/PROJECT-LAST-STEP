#pragma once
#include "CoreMinimal.h"
#include "EPuzzleState.generated.h"

UENUM(BlueprintType)
enum class EPuzzleState : uint8 {
    Idle,
    InProgress,
    IncrementProgress,
    Failed,
    BoobyTrapped,
    Shutdown,
    Solved,
};

