#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include "search.h"

class BinarySearch : public SearchingAlgorithm {
public:
    int search(const std::vector<int>&, int) override;
};

#endif