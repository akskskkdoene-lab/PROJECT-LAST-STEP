#pragma once
#include "CoreMinimal.h"
#include "OnRequestFailDelegate.generated.h"

class UVaRestRequestJSON;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestFail, UVaRestRequestJSON*, Request);

