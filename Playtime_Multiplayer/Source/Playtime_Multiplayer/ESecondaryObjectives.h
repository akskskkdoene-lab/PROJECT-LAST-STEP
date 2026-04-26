#pragma once
#include "CoreMinimal.h"
#include "ESecondaryObjectives.generated.h"

UENUM(BlueprintType)
enum ESecondaryObjectives {
    FindPuzzlePillar,
    SolvePuzzlePillar,
    PickupToyPart,
    FindToyDeposit,
    FindDeliveryPipe,
    PullPipeIntoPlace,
    FindTrainStation,
    CallTheTrain,
    WaitForTrain,
    None,
};

