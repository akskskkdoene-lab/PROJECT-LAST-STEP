#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ToyBoxResponseItem.h"
#include "ToyBoxResponse.generated.h"

USTRUCT(BlueprintType)
struct FToyBoxResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FToyBoxResponseItem> Items;
    
    PLAYTIME_MULTIPLAYER_API FToyBoxResponse();
};

