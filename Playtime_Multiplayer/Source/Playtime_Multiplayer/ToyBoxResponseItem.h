#pragma once
#include "CoreMinimal.h"
#include "ToyBoxResponseItem.generated.h"

USTRUCT(BlueprintType)
struct FToyBoxResponseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    PLAYTIME_MULTIPLAYER_API FToyBoxResponseItem();
};

