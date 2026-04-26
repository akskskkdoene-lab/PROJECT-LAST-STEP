#pragma once
#include "CoreMinimal.h"
#include "ETransition.generated.h"

UENUM(BlueprintType)
enum class ETransition : uint8 {
    MainMenu,
    HostMigration,
    AttemptingQuickplay,
};

