#pragma once
#include "CoreMinimal.h"
#include "EPerkType.generated.h"

UENUM(BlueprintType)
enum class EPerkType : uint8 {
    PT_Undefined,
    PT_PowerWalker,
    PT_ShadowWalker,
    PT_LeaveNoTrace,
    PT_DistantSavior,
    PT_PunchingBag,
    PT_Leadership,
    PT_MasterPianist,
    PT_ThinkFast,
    PT_Genius,
    PT_Pathfinder,
    PT_ClawCollector,
    PT_PuzzlePicasso,
};

