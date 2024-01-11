#include"headers/PokemonCard.h"
#include"headers/energycard.h"
#include"headers/trainercard.h"
#include"headers/Player.h"
#include"headers/EnergyCard.h"
#include <iostream>
#include <string>

using namespace std ;
int main ()
{
    Player player1 ("Hadi") ;
    player1.addBenchCard (new EnergyCard ("Electric") ) ;
    player1.addBenchCard (new EnergyCard ("Electric") ) ;
    player1.addBenchCard (new TrainerCard ("Ash","heal all your action pokemon") ) ;
    player1.addBenchCard (new PokemonCard("Pikachu", "Electric", "Pikachu", 2, 100, 2, "thunder bolt", 20, 3,
                                          "thunder storm", 30)) ;
    player1.activatePokemonCard (3) ;
    player1.attachEnergyCard (0 , 0) ;
    player1.attachEnergyCard (0 , 0) ;
    cout << endl ;
    player1.displayBenchCards () ;
    cout << endl ;
    player1.displayActionCards () ;
    Player player2 ("Germain") ;
    player2.addBenchCard (new EnergyCard ("Grass") ) ;
    player2.addBenchCard (new TrainerCard ("Brock","heal all your action pokemon") ) ;
    player2.addBenchCard (new PokemonCard("Bulbasaur", "Grass", "Bulbasaur", 1, 100, 2, "Leech Seed", 15, 3,
                                           "Vine Whip", 25));
    player2.activatePokemonCard (2) ;
    player2.attachEnergyCard (0 , 0) ;
    cout << endl ;
    player2.displayBenchCards () ;
    cout << endl ;
    player2.displayActionCards () ;
    player1.attack (0 , 0 , player2 , 0) ;
    cout << endl ;
    player2.displayActionCards () ;
    player2.useTrainer (0) ;
    cout << endl ;
    player2.displayActionCards () ;
    return 0;
}
