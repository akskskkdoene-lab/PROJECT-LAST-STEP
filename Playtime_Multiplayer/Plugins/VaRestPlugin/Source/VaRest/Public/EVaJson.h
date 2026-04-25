#pragma once
#include "CoreMinimal.h"
#include "EVaJson.generated.h"

UENUM(BlueprintType)
enum class EVaJson : uint8 {
    None,
    Null,
    String,
    Number,
    Boolean,
    Array,
    Object,
};

