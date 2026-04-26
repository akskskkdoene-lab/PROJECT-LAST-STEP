#pragma once
#include "CoreMinimal.h"
#include "ECosmeticRarity.generated.h"

UENUM(BlueprintType)
enum class ECosmeticRarity : uint8 {
    Basic,
    Rare,
    Epic,
    Legendary,
    ALL = 255,
};

