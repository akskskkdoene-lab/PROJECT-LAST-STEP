#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShoppyFeaturedItemResponse.h"
#include "ShoppyItemResponse.h"
#include "ShoppySaleResponse.h"
#include "ShoppyItemResponseSet.generated.h"

USTRUCT(BlueprintType)
struct FShoppyItemResponseSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FShoppySaleResponse SaleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShoppyItemResponse> Sale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShoppyFeaturedItemResponse> Featured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShoppyFeaturedItemResponse> Bundles;
    
    PLAYTIME_MULTIPLAYER_API FShoppyItemResponseSet();
};

