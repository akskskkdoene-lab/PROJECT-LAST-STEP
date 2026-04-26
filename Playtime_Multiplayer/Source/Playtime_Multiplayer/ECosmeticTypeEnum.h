#pragma once
#include "CoreMinimal.h"
#include "ECosmeticTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ECosmeticTypeEnum : uint8 {
    None,
    HandL,
    HandR,
    Grabpack,
    Skin,
    Hat,
    Face,
    Shirt,
    Pants,
    Shoes,
    Outfit,
    ALL = 255,
};

