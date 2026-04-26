#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESoundPackType.h"
#include "SoundPackEntry.generated.h"

class USoundPack;

USTRUCT(BlueprintType)
struct FSoundPackEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundPackType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundPack* SoundPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    PLAYTIME_MULTIPLAYER_API FSoundPackEntry();
};

