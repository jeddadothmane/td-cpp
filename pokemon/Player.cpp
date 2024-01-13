#include <iostream>
#include "headers/Player.h"
#include "headers/TrainerCard.h"

using namespace std;

Player::Player(const string& playerName) : playerName(playerName) {}

void Player::addBenchCard(Card* card) {
    benchCards.push_back(card);
}

void Player::addActionCard(PokemonCard* pokemonCard) {
    actionCards.push_back(pokemonCard);
}

void Player::activatePokemonCard(int index) {
    if (index >= 0 && index < benchCards.size()) {
        PokemonCard* pokemonCard = dynamic_cast<PokemonCard*>(benchCards[index]);

        if (pokemonCard) {
            benchCards.erase(benchCards.begin() + index);
            actionCards.push_back(pokemonCard);
            cout << "\n" << playerName << " is activating a Pokemon Card: " << pokemonCard->getCardName() << endl;
        }
    }
}

void Player::displayBench() const {
    cout << "Bench cards for Player " << playerName << " :" << endl;
    for (const auto& card : benchCards) {
        card->displayInfo();
    }
}

void Player::displayAction() const {
    cout << "Action cards for Player " << playerName << " :" << endl;
    if (!actionCards.empty()) {
        for (const auto& card : actionCards) {
            card->displayInfo();
        }
    }
}

void Player::attack(int attackingPokemonIndex, int attackIndex, Player& targetPlayer, int targetPokemonIndex) {
    if (attackingPokemonIndex >= 0 && attackingPokemonIndex < actionCards.size() &&
        attackIndex >= 0 && attackIndex < actionCards[attackingPokemonIndex]->getAttacks().size() &&
        targetPokemonIndex >= 0 && targetPokemonIndex < targetPlayer.actionCards.size()) {

        PokemonCard* attackingPokemon = dynamic_cast<PokemonCard*>(actionCards[attackingPokemonIndex]);
        PokemonCard* targetPokemon = dynamic_cast<PokemonCard*>(targetPlayer.actionCards[targetPokemonIndex]);

        if (attackingPokemon && targetPokemon) {
            const vector<tuple<int, int, string, int>>& attacks = attackingPokemon->getAttacks();
            const tuple<int, int, string, int>& attack = attacks[attackIndex];

            int attackCost = get<0>(attack);
            int currentEnergyStorage = get<1>(attack);

            if (currentEnergyStorage >= attackCost) {
                int damage = get<3>(attack);
                cout << "\n" << playerName << " attacking " << targetPlayer.playerName << "’s Pokemon "
                     << targetPokemon->getCardName() << " with the Pokemon " << attackingPokemon->getCardName()
                     << " with its attack: " << get<2>(attack) << endl;

                int newHP = targetPokemon->getCurrentHP() - damage;
                targetPokemon->setCurrentHP(newHP);

                cout << "\nReducing " << damage << " from " << targetPlayer.playerName << "’s Pokemon’s HP" << endl;
                cout << "\nPokemon " << targetPokemon->getCardName() << " is " << (newHP > 0 ? "still alive" : "fainted") << endl;
            }
        }
    }
}

void Player::useTrainer(int trainerIndex) {
    if (trainerIndex >= 0 && trainerIndex < benchCards.size()) {
        TrainerCard* trainerCard = dynamic_cast<TrainerCard*>(benchCards[trainerIndex]);
        if (trainerCard) {
            cout << "\n" << playerName << " is using the Trainer Card to \"" << trainerCard->getTrainerEffect() << "\"" << endl;

            for (Card* card : actionCards) {
                PokemonCard* pokemonCard = dynamic_cast<PokemonCard*>(card);
                if (pokemonCard) {
                    pokemonCard->setMaxHP();
                }
            }
        }
    }
}

void Player::attachEnergyCard(int pokemonIndex, int energyIndex) {
    if (pokemonIndex >= 0 && pokemonIndex < actionCards.size() &&
        energyIndex >= 0 && energyIndex < benchCards.size()) {
        PokemonCard* pokemon = dynamic_cast<PokemonCard*>(actionCards[pokemonIndex]);
        EnergyCard* energyCard = dynamic_cast<EnergyCard*>(benchCards[energyIndex]);

        if (pokemon && energyCard) {
            cout << "\n" << playerName << " is attaching Energy Card of type " << pokemon->getPokemonType() << " to the Pokemon " << pokemon->getCardName() << endl;

            pokemon->attachEnergy(energyCard);
        }
    }
}
