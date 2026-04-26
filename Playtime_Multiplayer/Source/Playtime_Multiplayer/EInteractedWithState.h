#pragma once
#include "CoreMinimal.h"
#include "EInteractedWithState.generated.h"

UENUM(BlueprintType)
enum EInteractedWithState {
    IWS_Idle,
    IWS_Reviving,
    IWS_Fixing,
    IWS_Cancelled,
};

