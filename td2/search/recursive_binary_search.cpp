#include "recursive_binary_search.h"

int RecursiveBinarySearch::search(const std::vector<int>& arr, int target, int left, int right) {
    int left = 0;
    int right = arr.size() - 1;
    // Initialisation du compteur de comparaisons à zéro
    numberComparisons = 0;

    // Vérification si la recherche est terminée
    if (right >= left) {
        // Incrémentation du compteur de comparaisons
        numberComparisons++;

        // Calcul de l'indice du milieu du tableau
        int mid = left + (right - left) / 2;

        // Vérification si la valeur à l'indice du milieu est égale au target
        if (arr[mid] == target) {
            // La target a été trouvée, retour de l'indice correspondant
            return mid;
        }

        // Si la valeur à l'indice du milieu est supérieure au target, réduire la recherche à la moitié gauche du tableau
        if (arr[mid] > target) {
            return search(arr, target, left, mid - 1);
        }

        // Si la valeur à l'indice du milieu est inférieure au target, réduire la recherche à la moitié droite du tableau
        return search(arr, target, mid + 1, right);
    }

    // Si la recherche se termine sans avoir trouvé la target, retourner -1
    return -1;
}

int RecursiveBinarySearch::getNumberComparisons() const {
    return numberComparisons;
}