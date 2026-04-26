#pragma once
#include "CoreMinimal.h"
#include "SoundPack.h"
#include "ChaseMusicPack.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class UChaseMusicPack : public USoundPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ChaseMusic;
    
    UChaseMusicPack();

};

