#ifndef TRAINERCARD_H
#define TRAINERCARD_H

#include "Card.h"

using namespace std;

class TrainerCard : public Card {
public:
    TrainerCard(const std::string& cardName, const std::string& trainerEffect);
    virtual void displayInfo() const override;
    string getTrainerEffect() const;

private:
    std::string trainerEffect;

};

#endif // TRAINERCARD_H
