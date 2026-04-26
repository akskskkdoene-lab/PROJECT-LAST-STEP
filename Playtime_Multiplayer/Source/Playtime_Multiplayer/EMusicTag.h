#pragma once
#include "CoreMinimal.h"
#include "EMusicTag.generated.h"

UENUM(BlueprintType)
enum class EMusicTag : uint8 {
    MainMenu,
    Ambient,
    Tense,
    Chase,
    Shop,
    Lobby,
};

