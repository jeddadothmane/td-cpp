#include "headers/Card.h"

using namespace std;

Card::Card(string name) : cardName(name) {

}

Card::~Card() {}

string Card::getCardName() const {
    return cardName;
}

void Card::setCardName(const string& newName) {
    cardName = newName;
}

