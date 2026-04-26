#pragma once
#include "CoreMinimal.h"
#include "ShoppyFeaturedItemResponse.generated.h"

USTRUCT(BlueprintType)
struct FShoppyFeaturedItemResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PriceInCoins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PriceInTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Rarity;
    
    PLAYTIME_MULTIPLAYER_API FShoppyFeaturedItemResponse();
};

