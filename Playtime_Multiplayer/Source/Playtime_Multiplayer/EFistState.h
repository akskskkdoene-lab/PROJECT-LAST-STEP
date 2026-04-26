#pragma once
#include "CoreMinimal.h"
#include "EFistState.generated.h"

UENUM(BlueprintType)
enum EFistState {
    EFS_Launched,
    EFS_HitObject,
    EFS_HitPlayer,
    EFS_Retracted,
};

