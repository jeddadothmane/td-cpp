#include "jump_search.h"
#include <cmath>

int JumpSearch::search(const std::vector<int>& arr, int target) {
    numberComparisons = 0;
    int n = arr.size();
    int step = sqrt(n);
    int prev = 0;
    while (arr[std::min(step, n)-1] < target) {
        numberComparisons++;
        prev = step;
        step += sqrt(n);
        if (prev >= n) {
            return -1;
        }
    }
    while (arr[prev] < target) {
        numberComparisons++;
        prev++;
        if (prev == std::min(step, n)) {
            return -1;
        }
    }
    if (arr[prev] == target) {
        return prev;
    }
    return -1;
}