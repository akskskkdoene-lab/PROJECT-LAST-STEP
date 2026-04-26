#pragma once
#include "CoreMinimal.h"
#include "EMommyGrappleState.generated.h"

UENUM(BlueprintType)
enum class EMommyGrappleState : uint8 {
    Idle,
    Extending,
    Pulling,
    AttachedToWall,
};

