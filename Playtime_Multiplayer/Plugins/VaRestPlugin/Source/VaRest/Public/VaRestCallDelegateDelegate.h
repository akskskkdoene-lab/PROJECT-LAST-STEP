#pragma once
#include "CoreMinimal.h"
#include "VaRestCallDelegateDelegate.generated.h"

class UVaRestRequestJSON;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FVaRestCallDelegate, UVaRestRequestJSON*, Request);

