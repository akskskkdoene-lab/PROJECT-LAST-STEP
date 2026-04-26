#include "ActionAsset.h"

UActionAsset::UActionAsset() {
    this->bIsGesture = false;
    this->CharacterType = ECharacterType::NONE;
}

UAnimSequence* UActionAsset::GetThirdPersonEmote(bool& Valid) {
    return NULL;
}

UAnimSequence* UActionAsset::GetRightHandGesture(bool& Valid) {
    return NULL;
}

UAnimSequence* UActionAsset::GetLeftHandGesture(bool& Valid) {
    return NULL;
}

UAnimSequence* UActionAsset::GetFirstPersonEmote(bool& Valid) {
    return NULL;
}


