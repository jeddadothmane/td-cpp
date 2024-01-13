#include "headers/PokemonCard.h"
#include <iostream>

PokemonCard::PokemonCard(const string& cardName, const string& pokemonType,
                         const string& familyName, int evolutionLevel,
                         int maxHP, int hp,
                         const vector<tuple<int, int, string, int>>& attacks)
        : Card(cardName), pokemonType(pokemonType), familyName(familyName),
          evolutionLevel(evolutionLevel), maxHP(maxHP), hp(hp), attacks(attacks) {
    attackCost = 0;
    currentEnergyStorage = 0;
    attackDescription = "";
    attackDamage = 0;
}

inline void PokemonCard::displayInfo() const {
    cout << "Pokemon Card - Name: " << cardName << ", Type: " << pokemonType
         << ", Evolution Level: " << evolutionLevel << " of the family " << familyName
         << ", HP: " << hp << endl;

    cout << "\n Attacks:" << endl;
    int attackNumber = 0;
    for (const auto& attack : attacks) {
        int attackCost = get<0>(attack);
        int currentEnergyStorage = get<1>(attack);
        string attackDescription = get<2>(attack);
        int attackDamage = get<3>(attack);

        cout << "\n Attack #" << attackNumber << ":" << endl;
        cout << "  Attack cost: " << attackCost << endl;
        cout << "  Attack current energy storage: " << currentEnergyStorage << endl;
        cout << "  Attack description: " << attackDescription << endl;
        cout << "  Attack damage: " << attackDamage << endl;

        attackNumber++;
    }
}


void PokemonCard::attachEnergy(EnergyCard* energyCard) {
    attachedEnergyCards.push_back(energyCard);
}

int PokemonCard::getCurrentHP() const {
    return hp;
}

void PokemonCard::setCurrentHP(int newHP) {
    hp = newHP;
}

const vector<std::tuple<int, int, string, int>>& PokemonCard::getAttacks() const {
    return attacks;
}

