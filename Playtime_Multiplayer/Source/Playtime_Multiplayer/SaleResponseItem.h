#pragma once
#include "CoreMinimal.h"
#include "SaleResponseItem.generated.h"

USTRUCT(BlueprintType)
struct FSaleResponseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SalePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OriginalPrice;
    
    PLAYTIME_MULTIPLAYER_API FSaleResponseItem();
};

