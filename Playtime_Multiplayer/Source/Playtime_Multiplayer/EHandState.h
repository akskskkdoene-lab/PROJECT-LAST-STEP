#pragma once
#include "CoreMinimal.h"
#include "EHandState.generated.h"

UENUM(BlueprintType)
enum class EHandState : uint8 {
    Idle,
    Extending,
    Grabbed,
    Pulling,
    Retracting,
    PausingBeforeRetraction,
};

