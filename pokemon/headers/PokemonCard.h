#ifndef POKEMONCARD_H
#define POKEMONCARD_H

#include "Card.h"
#include "EnergyCard.h"
#include <vector>
#include <tuple>
#include <string>

class PokemonCard : public Card {
private:

    string pokemonType;
    string familyName;
    int evolutionLevel;
    int maxHP;
    int hp;
    vector<tuple<int, int, string, int>> attacks;
    std::vector<EnergyCard*> attachedEnergyCards;

public:
    PokemonCard(string name, string type, string family, int evoLevel, int maxHp, int health,
                const char *attacks, int i, int i1, const char string1[14], int i2);

    string getPokemonType() const;
    void setPokemonType(const string &type);

    string getFamilyName() const;
    void setFamilyName(const string &family);

    int getEvolutionLevel() const;
    void setEvolutionLevel(int level);

    int getMaxHP() const;
    void setMaxHP(int maxHp);

    int getHP() const;
    void setHP(int health);

    void addAttack(int energyCost, int currentEnergyCost, string description, int damage);

    void attachEnergy(EnergyCard* energyCard);
    int calculateAttackDamage(int attackIndex);
    void reduceHP(int damage);

    virtual void displayInfo() const override;
};

#endif
