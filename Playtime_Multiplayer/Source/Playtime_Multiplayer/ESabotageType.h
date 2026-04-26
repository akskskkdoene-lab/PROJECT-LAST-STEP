#pragma once
#include "CoreMinimal.h"
#include "ESabotageType.generated.h"

UENUM(BlueprintType)
enum class ESabotageType : uint8 {
    ST_Undefined,
    ST_TotalLockdown,
    ST_Directionless,
    ST_NoPack,
    ST_Shutdown,
    ST_AutoCarry,
    ST_NoEscape,
    ST_BoobyTrap,
    ST_LivingNightmare,
};

