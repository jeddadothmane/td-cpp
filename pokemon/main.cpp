# include "headers/card.h"
# include "headers/pokemoncard.h"
# include "headers/energycard.h"
# include "headers/trainercard.h"
# include "headers/player.h"
# include <iostream >
# include <string >
using namespace std;
int main ()
{
    Player player1 (" Hadi ");
    player1.addBenchCard (new EnergyCard (" Electric "));
    player1.addBenchCard (new EnergyCard (" Electric "));
    player1.addBenchCard (new TrainerCard (" Ash", " heal all your action pokemon "));
    player1.addBenchCard (new PokemonCard("Pikachu", "Electric", "Pikachu", 2, 100, 100, { {2, 2, "thunder bolt", 20}, {3, 2, "thunder storm", 30} }));
    player1.activatePokemonCard (3) ;
    player1.attachEnergyCard (0, 0);
    player1.attachEnergyCard (0, 0);
    cout << endl ;
    player1.displayBench ();
    cout << endl ;
    player1.displayAction ();
    Player player2 (" Germain ");
    player2.addBenchCard (new EnergyCard (" Grass "));
    player2.addBenchCard (new TrainerCard (" Brock ", " heal all your action pokemon "));
    player2.addBenchCard (new PokemonCard("Pikachu", "Electric", "Pikachu", 2, 100, 100, { {2, 2, "thunder bolt", 20}, {3, 2, "thunder storm", 30} }));
    player2.activatePokemonCard (2) ;
    player2.attachEnergyCard (0, 0);
    cout << endl ;
    player2.displayBench ();
    cout << endl ;
    player2.displayAction ();
    player1.attack (0, 0, player2 , 0);
    cout << endl ;
    player2.displayAction ();
    player2.useTrainer (0) ;
    cout << endl ;
    player2.displayAction ();
    return 0;
}