#pragma once
#include "CoreMinimal.h"
#include "OnRequestCompleteDelegate.generated.h"

class UVaRestRequestJSON;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestComplete, UVaRestRequestJSON*, Request);

