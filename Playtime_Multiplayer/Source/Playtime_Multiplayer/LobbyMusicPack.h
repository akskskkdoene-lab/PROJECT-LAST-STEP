#pragma once
#include "CoreMinimal.h"
#include "SoundPack.h"
#include "LobbyMusicPack.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class ULobbyMusicPack : public USoundPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LobbyMusic;
    
    ULobbyMusicPack();

};

