#pragma once
#include "CoreMinimal.h"
#include "EStatisticCategory.generated.h"

UENUM(BlueprintType)
enum class EStatisticCategory : uint8 {
    General,
    Player,
    Monster,
    Huggy,
    Mommy,
    Boxy,
    Random,
    Last,
};

