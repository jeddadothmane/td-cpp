#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include "PokemonCard.h"
#include "EnergyCard.h"
#include <string>
#include <vector>

class Player {
private:
    std::string playerName;
    std::vector<Card*> benchCards;         // Vector of pointers to Card objects
    std::vector<PokemonCard*> actionCards; // Vector of pointers to PokemonCard objects

public:
    Player(const std::string& name);

    ~Player();

    void addBenchCard(Card* card);
    void addActionCard(PokemonCard* card);
    void removeBenchCard(Card* card);
    void removeActionCard(PokemonCard* card);
    void attachEnergyCard(int energyCardIndex, int pokemonCardIndex);
    void useTrainer(int trainerCardIndex);

    std::string getPlayerName() const;
    const std::vector<Card*>& getBenchCards() const;
    const std::vector<PokemonCard*>& getActionCards() const;

    void setPlayerName(const std::string& name);

    void displayBenchCards() const;
    void displayActionCards() const;
    void attack(int attackingPokemonIndex, int attackIndex, Player& opponent, int targetPokemonIndex);

    void activatePokemonCard(int cardIndex);};

#endif