#include <iostream>
#include <vector>
#include "headers/TrainerCard.h"
#include "headers/PokemonCard.h"

using namespace std;

TrainerCard::TrainerCard(const string& name, const string& effect)
        : Card(name), trainerEffect(effect) {}

string TrainerCard::getTrainerEffect() const {
    return trainerEffect;
}

void TrainerCard::setTrainerEffect(const string& effect) {
    trainerEffect = effect;
}

void TrainerCard::displayInfo() const {
    cout << "Trainer Name: " << getCardName() << "\n";
    cout << "Effect: " << trainerEffect << "\n";
}

void TrainerCard::applyEffect(std::vector<PokemonCard*>& actionPokemonCards) {
    for (auto* pokemonCard : actionPokemonCards) {
        pokemonCard->setHP(pokemonCard->getMaxHP());
    }
}