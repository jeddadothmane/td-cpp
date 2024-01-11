#include "headers/PokemonCard.h"
#include <iostream>

PokemonCard::PokemonCard(string name, string type, string family, int evoLevel, int maxHp, int health,
                         const char *attacks, int i, int i1, const char string1[14],
                         int i2)
        : Card(name), pokemonType(type), familyName(family), evolutionLevel(evoLevel), maxHP(maxHp), hp(health), attacks(
        (unsigned int) attacks) {
}

string PokemonCard::getPokemonType() const {
    return pokemonType;
}

void PokemonCard::setPokemonType(const string &type) {
    pokemonType = type;
}

string PokemonCard::getFamilyName() const {
    return familyName;
}

void PokemonCard::setFamilyName(const string &family) {
    familyName = family;
}

int PokemonCard::getEvolutionLevel() const {
    return evolutionLevel;
}

void PokemonCard::setEvolutionLevel(int level) {
    evolutionLevel = level;
}

int PokemonCard::getMaxHP() const {
    return maxHP;
}

void PokemonCard::setMaxHP(int maxHp) {
    maxHP = maxHp;
}

int PokemonCard::getHP() const {
    return hp;
}

void PokemonCard::setHP(int health) {
    hp = health;
}

void PokemonCard::addAttack(int energyCost, int currentEnergyCost, string description, int damage) {
    attacks.push_back(make_tuple(energyCost, currentEnergyCost, description, damage));
}

void PokemonCard::attachEnergy(EnergyCard* energyCard) {
    attachedEnergyCards.push_back(energyCard);
}

int PokemonCard::calculateAttackDamage(int attackIndex) {
    if (attackIndex < 0 || attackIndex >= attacks.size()) {
        return -1;
    }

    auto& attack = attacks[attackIndex];

    int energyCost = std::get<0>(attack);
    int currentEnergy = std::get<1>(attack);
    if (currentEnergy >= energyCost) {
        return std::get<3>(attack);
    }

    return -1;
}

void PokemonCard::reduceHP(int damage) {
    hp -= damage;
    if (hp < 0) hp = 0;
}

void PokemonCard::displayInfo() const {
    cout << "Pokemon Name: " << cardName << "\n";
    cout << "Type: " << pokemonType << "\n";
    cout << "Family Name: " << familyName << "\n";
    cout << "Evolution Level: " << evolutionLevel << "\n";
    cout << "Max HP: " << maxHP << "\n";
    cout << "Current HP: " << hp << "\n";
    // Loop through attacks and display them
    for (const auto& attack : attacks) {
        cout << "Attack: Energy Cost=" << get<0>(attack)
                  << ", Current Energy Cost=" << get<1>(attack)
                  << ", Description=" << get<2>(attack)
                  << ", Damage=" << get<3>(attack) << "\n";
    }
}
