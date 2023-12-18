#include "jump_search.h"
#include <cmath>

int JumpSearch::search(const std::vector<int>& arr, int target) {
    // Initialisation du compteur de comparaisons à zéro
    numberComparisons = 0;

    // Taille du tableau
    int n = arr.size();

    // Calcul de la taille du saut en utilisant la racine carrée de la taille du tableau
    int step = sqrt(n);

    // Initialisation de la position précédente à zéro
    int prev = 0;

    // Première étape : Faire un saut tant que la valeur à la position de step est inférieure au targer
    while (arr[std::min(step, n) - 1] < target) {
        numberComparisons++;
        prev = step;
        step += sqrt(n);
        // Si la position précédente dépasse ou est égale à la taille du tableau, target n'est pas présente
        if (prev >= n) {
            return -1;
        }
    }

    // Deuxième étape : Recherche linéaire dans le sous-tableau entre la position précédente et la position de saut
    while (arr[prev] < target) {
        numberComparisons++;
        prev++;
        // Si la position précédente atteint la position de saut, la target n'est pas présente
        if (prev == std::min(step, n)) {
            return -1;
        }
    }

    // Si la target est trouvée à la position actuelle, retournez cette position
    if (arr[prev] == target) {
        return prev;
    }

    // Si la target n'est pas trouvée, retournez -1
    return -1;
}
