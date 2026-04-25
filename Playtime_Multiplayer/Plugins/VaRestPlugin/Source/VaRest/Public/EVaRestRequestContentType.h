#pragma once
#include "CoreMinimal.h"
#include "EVaRestRequestContentType.generated.h"

UENUM(BlueprintType)
enum class EVaRestRequestContentType : uint8 {
    x_www_form_urlencoded_url,
    x_www_form_urlencoded_body,
    json,
    binary,
};

