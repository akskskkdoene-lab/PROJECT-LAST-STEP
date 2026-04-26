#include "MatchData.h"

FMatchData::FMatchData() {
    this->PlayerCount = 0;
    this->XP = 0;
    this->MatchState = EMatchState::Lobby;
    this->MatchResult = EMatchResult::None;
}

