#ifndef RECURSIVE_BINARY_SEARCH_H
#define RECURSIVE_BINARY_SEARCH_H

#include <vector>

class RecursiveBinarySearch {
public:
    int search(const std::vector<int>& arr, int target, int left, int right);
    int getNumberComparisons() const;

private:
    int numberComparisons;
};

#endif // BINARY_SEARCH_H