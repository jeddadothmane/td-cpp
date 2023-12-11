#include "linear_search.h"

int LinearSearch::search(const std::vector<int>& arr, int target) {
    numberComparisons = 0;
    for (int i = 0; i < arr.size(); i++) {
        numberComparisons++;
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}