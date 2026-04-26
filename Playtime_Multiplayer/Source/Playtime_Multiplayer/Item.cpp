#include "Item.h"

FItem::FItem() {
    this->ItemType = EItemType::None;
    this->Rarity = ECosmeticRarity::Basic;
    this->bUnlockedByDefault = false;
}

