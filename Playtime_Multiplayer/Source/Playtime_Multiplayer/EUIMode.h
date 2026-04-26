#pragma once
#include "CoreMinimal.h"
#include "EUIMode.generated.h"

UENUM(BlueprintType)
enum class EUIMode : uint8 {
    UI_ONLY,
    GAME_AND_UI,
    GAME_ONLY,
};

