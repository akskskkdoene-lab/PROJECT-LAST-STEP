#pragma once
#include "CoreMinimal.h"
#include "EHuggySoundSet.generated.h"

UENUM(BlueprintType)
enum class EHuggySoundSet : uint8 {
    Footstep,
    Crouch,
    Punch,
    PunchHit,
    ChargeAttack,
    ChargeAttackHit,
    PlaceMiniHuggy,
    Jumpscare,
    SelectScreen,
};

