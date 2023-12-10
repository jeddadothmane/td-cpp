// matrix.cpp
#include "matrix.h"

template<typename T>
void MatrixBase<T>::Display() const {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}