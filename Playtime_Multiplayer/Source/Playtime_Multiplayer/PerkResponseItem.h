#pragma once
#include "CoreMinimal.h"
#include "PerkResponseItem.generated.h"

USTRUCT(BlueprintType)
struct FPerkResponseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    PLAYTIME_MULTIPLAYER_API FPerkResponseItem();
};

