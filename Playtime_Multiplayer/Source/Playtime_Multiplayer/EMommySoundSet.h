#pragma once
#include "CoreMinimal.h"
#include "EMommySoundSet.generated.h"

UENUM(BlueprintType)
enum class EMommySoundSet : uint8 {
    Footstep,
    Crouch,
    Punch,
    PunchHit,
    WebsShooting,
    GrappleShot,
    GrappleStretch,
    GrappleGrab,
    Jumpscare,
    Spotter,
    SelectScreen,
};

