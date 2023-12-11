#ifndef JUMP_SEARCH_H
#define JUMP_SEARCH_H

#include "search.h"

class JumpSearch : public SearchingAlgorithm {
public:
    int search(const std::vector<int>&, int) override;
};

#endif