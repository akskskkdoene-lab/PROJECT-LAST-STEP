#pragma once
#include "CoreMinimal.h"
#include "EMatchResultState.h"
#include "MatchResultStat.generated.h"

USTRUCT(BlueprintType)
struct FMatchResultStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMatchResultState Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Tickets;
    
    PLAYTIME_MULTIPLAYER_API FMatchResultStat();
};

