#pragma once
#include "CoreMinimal.h"
#include "ERewardableActions.h"
#include "RewardableAction.generated.h"

USTRUCT(BlueprintType)
struct FRewardableAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardableActions Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfEntries;
    
    PLAYTIME_MULTIPLAYER_API FRewardableAction();
};

