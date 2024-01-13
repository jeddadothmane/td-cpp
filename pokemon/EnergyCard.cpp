#include "headers/EnergyCard.h"
#include <iostream>

EnergyCard::EnergyCard(const std::string& energyType) : Card("Energy"), energyType(energyType) {}

void EnergyCard::displayInfo() const {
    std::cout << "Card Name: " << cardName << std::endl;
    std::cout << "Energy Type: " << energyType << std::endl;
}
