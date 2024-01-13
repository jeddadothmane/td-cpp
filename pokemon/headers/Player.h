#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include "Card.h"
#include "PokemonCard.h"

class Player {
public:
    Player(const std::string& playerName);
    void addBenchCard(Card* card);
    void addActionCard(PokemonCard* pokemonCard);
    void activatePokemonCard(int index);
    void attachEnergyCard(int pokemonIndex, int energyIndex);
    void displayBench() const;
    void displayAction() const;
    void attack(int attackingPokemonIndex, int attackIndex, Player& targetPlayer, int targetPokemonIndex);
    void useTrainer(int trainerIndex);

private:
    std::string playerName;
    std::vector<Card*> benchCards;
    std::vector<PokemonCard*> actionCards;

};

#endif

