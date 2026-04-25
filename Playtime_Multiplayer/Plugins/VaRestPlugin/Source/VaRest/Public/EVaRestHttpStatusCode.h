#pragma once
#include "CoreMinimal.h"
#include "EVaRestHttpStatusCode.generated.h"

UENUM(BlueprintType)
namespace EVaRestHttpStatusCode {
    enum Type {
        Unknown,
        Continue = 100,
        SwitchProtocol,
        Ok = 200,
        Created,
        Accepted,
        Partial,
        NoContent,
        ResetContent,
        PartialContent,
        Ambiguous = 300,
        Moved,
        Redirect,
        RedirectMethod,
        NotModified,
        UseProxy,
        RedirectKeepVerb = 307,
        BadRequest = 400,
        Denied,
        PaymentReq,
        Forbidden,
        NotFound,
        BadMethod,
        NoneAcceptable,
        ProxyAuthReq,
        RequestTimeout,
        Conflict,
        Gone,
        LengthRequired,
        PrecondFailed,
        RequestTooLarge,
        UriTooLong,
        UnsupportedMedia,
        TooManyRequests = 429,
        RetryWith = 449,
        ServerError = 500,
        NotSupported,
        BadGateway,
        ServiceUnavail,
        GatewayTimeout,
        VersionNotSup,
    };
}

