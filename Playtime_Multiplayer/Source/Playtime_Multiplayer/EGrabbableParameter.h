#pragma once
#include "CoreMinimal.h"
#include "EGrabbableParameter.generated.h"

UENUM(BlueprintType)
enum class EGrabbableParameter : uint8 {
    None,
    CanBePulled,
    CanBePickedUp,
};

