#include <iostream>
#include "headers/EnergyCard.h"

using namespace std;

EnergyCard::EnergyCard(const string& type)
        : Card("Energy"), energyType(type) {}

string EnergyCard::getEnergyType() const {
    return energyType;
}

void EnergyCard::setEnergyType(const string& type) {
    energyType = type;
}

void EnergyCard::displayInfo() const {
    cout << "Card Name: " << getCardName() << "\n";
    cout << "Energy Type: " << energyType << "\n";
}