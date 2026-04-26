#include "Cosmetic.h"

FCosmetic::FCosmetic() {
    this->Rarity = ECosmeticRarity::Basic;
    this->CosmeticType = ECosmeticTypeEnum::None;
    this->CharacterType = ECharacterType::NONE;
    this->bIsPublic = false;
    this->bIsPreReleaseOnly = false;
    this->MeshContainerClass = NULL;
    this->bIsColorable = false;
    this->ColorableLayer = 0;
    this->AnimationBlueprint = NULL;
    this->bDoesHatSupportMask = false;
    this->OutfitSkinType = ECosmeticOutfitSkinType::None;
    this->bUseDefaultSkinElements = false;
}

