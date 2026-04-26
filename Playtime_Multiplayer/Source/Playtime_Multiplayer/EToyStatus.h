#pragma once
#include "CoreMinimal.h"
#include "EToyStatus.generated.h"

UENUM(BlueprintType)
enum class EToyStatus : uint8 {
    Assembled,
    Carried,
    Grounded,
};

