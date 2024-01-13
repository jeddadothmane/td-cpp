#ifndef POKEMONCARD_H
#define POKEMONCARD_H

#include <vector>
#include <iostream>
#include <tuple>
#include "Card.h"
#include "EnergyCard.h"

using namespace std;

class PokemonCard:public Card {
public:

    PokemonCard(const string& cardName, const string& pokemonType,
                const string& familyName, int evolutionLevel,
                int maxHP, int hp,
                const vector<tuple<int, int, string, int>>& attacks);
    void displayInfo() const override;

    PokemonCard();

    void setPokemonType(const string& setPokemonType);
    void setfamilyName(const string& familyName);
    void setevolutionLevel(const int& evolutionLevel);
    void setfamilyName(const int& familyName);
    void setMaxHP(){
        hp = maxHP;
    }
    void setHp(const int& hp);
    void setAttacks(const vector<tuple<int, int, string, int>>& attacks);
    void setCardName(const string& cardName);
    string getCardName() const{
        return cardName;
    }
    int getCurrentHP() const;
    void setCurrentHP(int hp);
    void attachEnergy(EnergyCard* energyCard);
    const vector<tuple<int, int, string, int>>& getAttacks() const;
    string getPokemonType() const {
        return pokemonType;
    }
private:
    string pokemonType;
    string familyName;
    int evolutionLevel;
    int maxHP;
    int hp;
    vector<tuple<int, int, string, int>> attacks;
    vector<EnergyCard*> attachedEnergyCards;
    int attackCost;
    int currentEnergyStorage;
    string attackDescription;
    int attackDamage;
};

#endif

