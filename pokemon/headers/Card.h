#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
public:
    Card(const std::string& cardName);
    virtual ~Card();
    virtual void displayInfo() const = 0;

protected:
    std::string cardName;
};

#endif