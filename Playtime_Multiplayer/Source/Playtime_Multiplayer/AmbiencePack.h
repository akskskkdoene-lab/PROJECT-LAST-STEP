#pragma once
#include "CoreMinimal.h"
#include "SoundPack.h"
#include "AmbiencePack.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class UAmbiencePack : public USoundPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TheaterAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FactoryAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DestroyAToyAmbience;
    
    UAmbiencePack();

};

