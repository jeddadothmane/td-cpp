#include <iostream>
#include "Card.h"

using namespace std;

Card::Card() {
    cardName = "";
}

Card::Card(string setCardName) {
    cardName = setCardName;
}

void Card::setCardName(const string& setCardName) {
    cardName = setCardName;
}

void Card::displayInfo() const {
    cout << "Card Name: " << cardName << endl;
}