#pragma once
#include "CoreMinimal.h"
#include "EVaRestRequestStatus.generated.h"

UENUM(BlueprintType)
enum class EVaRestRequestStatus : uint8 {
    NotStarted,
    Processing,
    Failed,
    Failed_ConnectionError,
    Succeeded,
};

