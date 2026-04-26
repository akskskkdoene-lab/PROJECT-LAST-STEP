#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemAsset.generated.h"

UCLASS(Blueprintable)
class PLAYTIME_MULTIPLAYER_API UItemAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasBeenLoaded;
    
public:
    UItemAsset();

};

