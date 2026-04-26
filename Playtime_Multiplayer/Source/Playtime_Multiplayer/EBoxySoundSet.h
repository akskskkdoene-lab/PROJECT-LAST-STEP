#pragma once
#include "CoreMinimal.h"
#include "EBoxySoundSet.generated.h"

UENUM(BlueprintType)
enum class EBoxySoundSet : uint8 {
    Footstep,
    Crouch,
    Punch,
    PunchHit,
    ChargingJump,
    ReleasedCharge,
    Land,
    Jump,
    GrabShoot,
    GrabGrab,
    Jumpscare,
    SelectScreen,
};

