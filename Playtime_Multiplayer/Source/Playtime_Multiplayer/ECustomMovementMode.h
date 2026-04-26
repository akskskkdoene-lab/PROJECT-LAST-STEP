#pragma once
#include "CoreMinimal.h"
#include "ECustomMovementMode.generated.h"

UENUM(BlueprintType)
enum ECustomMovementMode {
    CMOVE_Swinging,
    CMOVE_Spline,
    CMOVE_Dashing,
    CMOVE_Prone,
};

