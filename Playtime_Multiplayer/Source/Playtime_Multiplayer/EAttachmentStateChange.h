#pragma once
#include "CoreMinimal.h"
#include "EAttachmentStateChange.generated.h"

UENUM(BlueprintType)
enum class EAttachmentStateChange : uint8 {
    ASC_Attached,
    ASC_Detached,
    ASC_StartedPulling,
};

