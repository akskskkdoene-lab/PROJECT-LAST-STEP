#include "ShopItem.h"

FShopItem::FShopItem() {
    this->Price = 0;
    this->TicketPrice = 0;
    this->Rarity = ECosmeticRarity::Basic;
    this->bGetPriceFromTypeAndRarity = false;
    this->OverridePrice = 0;
}

