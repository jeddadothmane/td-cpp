#include "binary_search.h"

int BinarySearch::search(const std::vector<int>& arr, int target) {
    // Initialisation du compteur de comparaisons à zéro
    numberComparisons = 0;

    // Initialisation des indices gauche et droit du tableau
    int left = 0;
    int right = arr.size() - 1;

    // Boucle while pour effectuer la recherche binaire
    while (left <= right) {
        // Incrémentation du compteur de comparaisons
        numberComparisons++;
        
        // Calcul de l'indice du milieu du tableau
        int mid = left + (right - left) / 2;

        // Vérification si la valeur à l'indice du milieu est égale à la cible
        if (arr[mid] == target) {
            // La cible a été trouvée, retour de l'indice correspondant
            return mid;
        }

        // Si la valeur à l'indice du milieu est inférieure à la cible, réduire la recherche à la moitié droite du tableau
        if (arr[mid] < target) {
            left = mid + 1;
        } 
        // Si la valeur à l'indice du milieu est supérieure à la cible, réduire la recherche à la moitié gauche du tableau
        else {
            right = mid - 1;
        }
    }

    // Si la boucle se termine sans avoir trouvé la cible, retourner -1
    return -1;
}
