#pragma once
#include "CoreMinimal.h"
#include "EHandStateChange.generated.h"

UENUM(BlueprintType)
enum class EHandStateChange : uint8 {
    HSC_Undefined,
    HSC_Shot,
    HSC_Returned,
    HSC_Grabbed,
    HSC_HitObject,
    HSC_StartedPulling,
};

