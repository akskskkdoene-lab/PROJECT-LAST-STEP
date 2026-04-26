#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterType.h"
#include "ECosmeticOutfitSkinType.h"
#include "ECosmeticTypeEnum.h"
#include "ItemAsset.h"
#include "Templates/SubclassOf.h"
#include "CosmeticAsset.generated.h"

class UAnimInstance;
class UMaterialInstance;
class USkeletalMesh;
class USoundBase;
class UStaticMesh;

UCLASS(Blueprintable)
class PLAYTIME_MULTIPLAYER_API UCosmeticAsset : public UItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECosmeticTypeEnum CosmeticType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterType CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> MeshContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsColorable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> Colors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorableLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USkeletalMesh*> SkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimationBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesHatSupportMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECosmeticOutfitSkinType OutfitSkinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECosmeticOutfitSkinType, USkeletalMesh*> SkinMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstance*> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundBase*> Sounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultSkinElements;
    
    UCosmeticAsset();

    UFUNCTION(BlueprintCallable)
    USkeletalMesh* GetMesh(bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMesh* GetLowMesh(bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMesh* GetHighMesh(bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    USoundBase* GetHandShootSound(bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    USoundBase* GetHandRetractSound(bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMesh* GetAlternateMesh(bool& Valid);
    
};

