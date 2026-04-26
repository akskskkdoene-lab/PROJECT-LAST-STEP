#pragma once
#include "CoreMinimal.h"
#include "ESoundPackType.generated.h"

UENUM(BlueprintType)
enum class ESoundPackType : uint8 {
    SP_None,
    SP_Puzzle,
    SP_Survivor,
    SP_Lobby,
    SP_Ambient,
    SP_Chase,
    ALL = 255,
};

