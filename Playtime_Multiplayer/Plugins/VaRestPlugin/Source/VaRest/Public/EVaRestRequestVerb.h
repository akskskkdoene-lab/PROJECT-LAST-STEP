#pragma once
#include "CoreMinimal.h"
#include "EVaRestRequestVerb.generated.h"

UENUM(BlueprintType)
enum class EVaRestRequestVerb : uint8 {
    GET,
    POST,
    PUT,
    DEL,
    CUSTOM,
};

