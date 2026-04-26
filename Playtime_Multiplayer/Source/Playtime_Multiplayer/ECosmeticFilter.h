#pragma once
#include "CoreMinimal.h"
#include "ECosmeticFilter.generated.h"

UENUM(BlueprintType)
enum class ECosmeticFilter : uint8 {
    Default,
    Rarity,
    Alphabetical,
    Newest,
};

