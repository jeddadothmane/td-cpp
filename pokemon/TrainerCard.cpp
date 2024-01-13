#include "headers/TrainerCard.h"
#include <iostream>

TrainerCard::TrainerCard(const std::string& cardName, const std::string& trainerEffect) : Card(cardName), trainerEffect(trainerEffect) {}

void TrainerCard::displayInfo() const {
    std::cout << "Card Name: " << cardName << std::endl;
    std::cout << "Trainer Effect: " << trainerEffect << std::endl;
}
string TrainerCard::getTrainerEffect() const {
    return trainerEffect;
}
