#pragma once
#include "CoreMinimal.h"
#include "ECharacterType.h"
#include "ItemAsset.h"
#include "ActionAsset.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class PLAYTIME_MULTIPLAYER_API UActionAsset : public UItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGesture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterType CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAnimSequence*> Anims;
    
    UActionAsset();

    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetThirdPersonEmote(bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetRightHandGesture(bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetLeftHandGesture(bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetFirstPersonEmote(bool& Valid);
    
};

