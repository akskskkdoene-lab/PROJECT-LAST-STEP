#pragma once
#include "CoreMinimal.h"
#include "QueueData.generated.h"

USTRUCT(BlueprintType)
struct FQueueData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundsSinceLastMonster;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToBeMonster;
    
    PLAYTIME_MULTIPLAYER_API FQueueData();
};

