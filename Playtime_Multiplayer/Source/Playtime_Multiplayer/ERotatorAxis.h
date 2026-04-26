#pragma once
#include "CoreMinimal.h"
#include "ERotatorAxis.generated.h"

UENUM(BlueprintType)
enum class ERotatorAxis : uint8 {
    Pitch,
    Yaw,
    Roll,
};

