#pragma once
#include "CoreMinimal.h"
#include "EMantleState.generated.h"

UENUM(BlueprintType)
enum class EMantleState : uint8 {
    Mantle_Enter,
    Mantle_Idle,
    Mantle_Exit,
};

