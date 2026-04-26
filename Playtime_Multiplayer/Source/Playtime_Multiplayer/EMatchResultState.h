#pragma once
#include "CoreMinimal.h"
#include "EMatchResultState.generated.h"

UENUM(BlueprintType)
enum class EMatchResultState : uint8 {
    MRS_Finished,
    MRS_Timeout,
    MRS_Disconnected,
};

