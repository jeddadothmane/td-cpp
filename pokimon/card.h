#include <iostream>

using namespace std;
class Card {
    string cardName;

    public:
        Card();
        Card(string cardName){
            this -> cardName = cardName;
        }

        void setCardName(const string& setCardName);

        virtual void displayInfo() const;

};