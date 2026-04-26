#pragma once
#include "CoreMinimal.h"
#include "EMatchState.generated.h"

UENUM(BlueprintType)
enum class EMatchState : uint8 {
    Lobby,
    InProgress,
    Ended,
};

