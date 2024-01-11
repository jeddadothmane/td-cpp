#ifndef CARD_H
#define CARD_H

#include <string>

using namespace std;

class Card {
public:
    string cardName;

    virtual void displayInfo() const = 0;

    Card(string name);
    virtual ~Card();
    string getCardName() const;
    void setCardName(const std::string& newName);
};

#endif