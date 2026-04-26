#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShoppySaleResponse.generated.h"

USTRUCT(BlueprintType)
struct FShoppySaleResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime EndTime;
    
    PLAYTIME_MULTIPLAYER_API FShoppySaleResponse();
};

