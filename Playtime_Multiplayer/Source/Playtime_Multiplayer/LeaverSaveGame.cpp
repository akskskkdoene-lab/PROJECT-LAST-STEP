#include "LeaverSaveGame.h"

ULeaverSaveGame::ULeaverSaveGame() {
    this->Level = 0;
}

bool ULeaverSaveGame::Does12HourPunishmentExist() const {
    return false;
}

bool ULeaverSaveGame::ComparePunishmentLevel(FTimespan& TimeLeft) const {
    return false;
}


