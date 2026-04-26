#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    None,
    Cosmetic,
    Action,
    Bundle,
    SeasonPass,
    LoadingScreen,
    SoundPack,
    ALL = 255,
};

