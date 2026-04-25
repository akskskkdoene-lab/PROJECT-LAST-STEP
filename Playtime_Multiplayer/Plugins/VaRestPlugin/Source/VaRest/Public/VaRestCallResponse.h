#pragma once
#include "CoreMinimal.h"
#include "VaRestCallDelegateDelegate.h"
#include "VaRestCallResponse.generated.h"

class UVaRestRequestJSON;

USTRUCT(BlueprintType)
struct FVaRestCallResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVaRestRequestJSON* Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVaRestCallDelegate Callback;
    
    VAREST_API FVaRestCallResponse();
};

