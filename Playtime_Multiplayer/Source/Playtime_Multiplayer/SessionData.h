#pragma once
#include "CoreMinimal.h"
#include "SessionData.generated.h"

USTRUCT(BlueprintType)
struct FSessionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendsOnly;
    
    PLAYTIME_MULTIPLAYER_API FSessionData();
};

