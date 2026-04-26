#pragma once
#include "CoreMinimal.h"
#include "EHostMigrationType.generated.h"

UENUM(BlueprintType)
enum class EHostMigrationType : uint8 {
    None,
    Basic,
    Advanced,
};

