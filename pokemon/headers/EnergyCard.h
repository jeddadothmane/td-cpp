#ifndef ENERGYCARD_H
#define ENERGYCARD_H

#include "Card.h"
#include <string>

using namespace std;

class EnergyCard : public Card {
private:
    string energyType;

public:
    EnergyCard(const string& type);

    string getEnergyType() const;
    void setEnergyType(const string& type);

    virtual void displayInfo() const override;
};

#endif
