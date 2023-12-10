#include "num_matrix.h"

template<typename T>
T MatrixNumerical<T>::getDeterminant() const {
    if (this->getRows() != this->getCols()) {
        throw std::invalid_argument("Matrix must be square to calculate determinant");
    }
    if (this->getRows() == 1) {
        return this->getElement(0, 0);
    }
    else if (this->getRows() == 2) {
        return this->getElement(0, 0) * this->getElement(1, 1) - this->getElement(0, 1) * this->getElement(1, 0);
    }
    else {
        T det = 0;
        for (int i = 0; i < this->getCols(); i++) {
            MatrixNumerical<T> subMatrix(this->getRows() - 1, this->getCols() - 1);
            for (int j = 1; j < this->getRows(); j++) {
                int k = 0;
                for (int l = 0; l < this->getCols(); l++) {
                    if (l != i) {
                        subMatrix.setElement(j - 1, k, this->getElement(j, l));
                        k++;
                    }
                }
            }
            det += pow(-1, i) * this->getElement(0, i) * subMatrix.getDeterminant();
        }
        return det;
    }

}
