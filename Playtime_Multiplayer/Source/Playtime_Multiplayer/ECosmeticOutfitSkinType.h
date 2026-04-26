#pragma once
#include "CoreMinimal.h"
#include "ECosmeticOutfitSkinType.generated.h"

UENUM(BlueprintType)
enum class ECosmeticOutfitSkinType : uint8 {
    None,
    HeadFull,
    HeadSphereOnly,
    HeadNeckOnly,
    TorsoFull,
    TorsoEngineer,
    TorsoHandsOnly,
    TorsoHoodie,
    TorsoNeonPunk,
    TorsoShouldersElbows,
    TorsoShouldersWrists,
    TorsoSoldier,
    TorsoSwimGirl,
    TorsoAnimeGirl,
    LegsFull,
    LegsLower,
    LegsShorts,
    LegsNeonPunk,
    LegsSwimGirl,
    LegsAnimeGirl,
    FeetFull,
    FeetAnkleOnly,
    LAST,
};

