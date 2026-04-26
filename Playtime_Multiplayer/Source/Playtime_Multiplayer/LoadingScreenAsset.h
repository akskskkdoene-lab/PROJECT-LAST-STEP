#pragma once
#include "CoreMinimal.h"
#include "ItemAsset.h"
#include "LoadingScreenAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class PLAYTIME_MULTIPLAYER_API ULoadingScreenAsset : public UItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LoadingScreenImage;
    
    ULoadingScreenAsset();

};

