#pragma once
#include "CoreMinimal.h"
#include "EProgressMilestone.generated.h"

UENUM(BlueprintType)
enum class EProgressMilestone : uint8 {
    PM_ReachedStart,
    PM_PassedThreshold,
    PM_ReachedEnd,
};

