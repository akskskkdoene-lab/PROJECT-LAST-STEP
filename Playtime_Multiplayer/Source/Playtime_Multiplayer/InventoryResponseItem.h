#pragma once
#include "CoreMinimal.h"
#include "InventoryResponseItem.generated.h"

USTRUCT(BlueprintType)
struct FInventoryResponseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    PLAYTIME_MULTIPLAYER_API FInventoryResponseItem();
};

