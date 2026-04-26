#pragma once
#include "CoreMinimal.h"
#include "EFearState.generated.h"

UENUM(BlueprintType)
enum class EFearState : uint8 {
    Calm,
    Tense,
    Chase,
};

