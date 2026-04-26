#pragma once
#include "CoreMinimal.h"
#include "TicketRewardableAction.generated.h"

USTRUCT(BlueprintType)
struct FTicketRewardableAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TicketRewardRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfEntries;
    
    PLAYTIME_MULTIPLAYER_API FTicketRewardableAction();
};

