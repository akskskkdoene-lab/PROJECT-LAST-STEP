#include "SabotageDef.h"

FSabotageDef::FSabotageDef() {
    this->Cooldown = 0.00f;
    this->ActivationSound = NULL;
    this->Icon = NULL;
    this->ActorToSabotage = NULL;
    this->InterfaceToSabotage = NULL;
    this->bShouldMulticast = false;
    this->bUseDuration = false;
    this->LevelOne = 0.00f;
    this->LevelTwo = 0.00f;
    this->LevelThree = 0.00f;
    this->bLevelIsCount = false;
    this->LevelOnePrice = 0;
    this->LevelTwoPrice = 0;
    this->LevelThreePrice = 0;
}

