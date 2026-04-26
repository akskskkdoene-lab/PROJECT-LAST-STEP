#pragma once
#include "CoreMinimal.h"
#include "ItemAsset.h"
#include "Templates/SubclassOf.h"
#include "BundleAsset.generated.h"

class AActor;

UCLASS(Blueprintable)
class PLAYTIME_MULTIPLAYER_API UBundleAsset : public UItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BundlePreviewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BundleContent;
    
    UBundleAsset();

};

