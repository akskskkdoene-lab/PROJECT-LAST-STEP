#pragma once
#include "CoreMinimal.h"
#include "EMazeComponentType.generated.h"

UENUM(BlueprintType)
enum class EMazeComponentType : uint8 {
    FROM_UP,
    HORIZONTAL,
    TO_DOWN,
    TURN,
    VERTICAL,
};

