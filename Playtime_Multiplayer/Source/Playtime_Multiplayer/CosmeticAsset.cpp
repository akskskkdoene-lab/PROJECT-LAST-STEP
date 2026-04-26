#include "CosmeticAsset.h"

UCosmeticAsset::UCosmeticAsset() {
    this->CosmeticType = ECosmeticTypeEnum::None;
    this->CharacterType = ECharacterType::NONE;
    this->MeshContainerClass = NULL;
    this->bIsColorable = false;
    this->ColorableLayer = 0;
    this->StaticMesh = NULL;
    this->AnimationBlueprint = NULL;
    this->bDoesHatSupportMask = false;
    this->OutfitSkinType = ECosmeticOutfitSkinType::None;
    this->bUseDefaultSkinElements = false;
}

USkeletalMesh* UCosmeticAsset::GetMesh(bool& Valid) {
    return NULL;
}

USkeletalMesh* UCosmeticAsset::GetLowMesh(bool& Valid) {
    return NULL;
}

USkeletalMesh* UCosmeticAsset::GetHighMesh(bool& Valid) {
    return NULL;
}

USoundBase* UCosmeticAsset::GetHandShootSound(bool& Valid) {
    return NULL;
}

USoundBase* UCosmeticAsset::GetHandRetractSound(bool& Valid) {
    return NULL;
}

USkeletalMesh* UCosmeticAsset::GetAlternateMesh(bool& Valid) {
    return NULL;
}


