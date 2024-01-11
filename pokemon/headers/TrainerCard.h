#ifndef TRAINERCARD_H
#define TRAINERCARD_H

#include "Card.h"
#include "PokemonCard.h"
#include <string>

class TrainerCard : public Card {
private:
    std::string trainerEffect;

public:
    TrainerCard(const std::string& name, const std::string& effect);

    std::string getTrainerEffect() const;
    void setTrainerEffect(const std::string& effect);

    virtual void displayInfo() const override;

    void applyEffect(std::vector<PokemonCard*>& actionPokemonCards);
};

#endif
