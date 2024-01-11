#include "headers/Player.h"
#include "headers/EnergyCard.h"
#include "headers/TrainerCard.h"
#include <iostream>
#include <algorithm>

using namespace std;

Player::Player(const string& name) : playerName(name) {}

Player::~Player() {

}

void Player::addBenchCard(Card* card) {
    benchCards.push_back(card);
}
void Player::activatePokemonCard(int cardIndex) {

    if (cardIndex < 0 || cardIndex >= benchCards.size()) {
        cout << "Invalid card index." << endl;
        return;
    }

    PokemonCard* card = dynamic_cast<PokemonCard*>(benchCards[cardIndex]);
    if (card) {
        actionCards.push_back(card);
        benchCards.erase(benchCards.begin() + cardIndex);
    } else {
        cout << "The selected card is not a PokemonCard." << endl;
    }
}

void Player::attachEnergyCard(int energyCardIndex, int pokemonCardIndex) {
    if (energyCardIndex < 0 || energyCardIndex >= benchCards.size() ||
        pokemonCardIndex < 0 || pokemonCardIndex >= actionCards.size()) {
        cout << "Invalid card index." << endl;
        return;
    }

    EnergyCard* energyCard = dynamic_cast<EnergyCard*>(benchCards[energyCardIndex]);
    PokemonCard* pokemonCard = actionCards[pokemonCardIndex];

    if (energyCard && pokemonCard) {
        pokemonCard->attachEnergy(energyCard);
        benchCards.erase(benchCards.begin() + energyCardIndex);
    } else {
        cout << "Invalid operation. Either the energy or the Pokemon card is not found." << endl;
    }
}

void Player::removeBenchCard(Card* card) {
    auto it = remove_if(benchCards.begin(), benchCards.end(),
                             [card](const Card* c) { return c == card; });
    if (it != benchCards.end()) {
        benchCards.erase(it, benchCards.end());
    }
}

void Player::addActionCard(PokemonCard* card) {
    actionCards.push_back(card);
}

void Player::removeActionCard(PokemonCard* card) {
    auto it = remove_if(actionCards.begin(), actionCards.end(),
                             [card](const PokemonCard* pc) { return pc == card; });
    if (it != actionCards.end()) {
        actionCards.erase(it, actionCards.end());
    }
}

string Player::getPlayerName() const {
    return playerName;
}

const vector<Card*>& Player::getBenchCards() const {
    return benchCards;
}

const vector<PokemonCard*>& Player::getActionCards() const {
    return actionCards;
}

void Player::setPlayerName(const string& name) {
    playerName = name;
}

void Player::displayBenchCards() const {
    cout << "Bench Cards:\n";
    for (const auto& card : benchCards) {
        card->displayInfo();
        cout << "\n";
    }
}

void Player::displayActionCards() const {
    cout << "Action Cards:\n";
    for (const auto& card : actionCards) {
        card->displayInfo();
        cout << "\n";
    }
}

void Player::attack(int attackingPokemonIndex, int attackIndex, Player& opponent, int targetPokemonIndex) {
    if (attackingPokemonIndex < 0 || attackingPokemonIndex >= actionCards.size() ||
        targetPokemonIndex < 0 || targetPokemonIndex >= opponent.actionCards.size()) {
        cout << "Invalid card index." << endl;
        return;
    }

    PokemonCard* attackingPokemon = actionCards[attackingPokemonIndex];
    PokemonCard* targetPokemon = opponent.actionCards[targetPokemonIndex];

    int damage = attackingPokemon->calculateAttackDamage(attackIndex);
    if (damage < 0) {
        cout << "Attack not possible." << endl;
        return;
    }

    targetPokemon->reduceHP(damage);
    cout << "Attacking " << targetPokemon->getCardName() << " with damage: " << damage << endl;

    if (targetPokemon->getHP() <= 0) {
        cout << targetPokemon->getCardName() << " is defeated." << endl;
    }
}

void Player::useTrainer(int trainerCardIndex) {
    // Check if the index is valid
    if (trainerCardIndex < 0 || trainerCardIndex >= benchCards.size()) {
        cout << "Invalid card index." << endl;
        return;
    }

    TrainerCard* trainerCard = dynamic_cast<TrainerCard*>(benchCards[trainerCardIndex]);
    if (trainerCard) {
        // Assuming applyEffect requires a vector of PokemonCard pointers
        trainerCard->applyEffect(actionCards);
    } else {
        std::cout << "The selected card is not a Trainer card." << std::endl;
    }
}


