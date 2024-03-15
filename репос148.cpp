#include <iostream>

const int ROWS = 3;
const int COLS = 3;

void transposeMatrix(int matrix[][COLS]) {
    int temp;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = i + 1; j < COLS; ++j) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void printMatrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[ROWS][COLS] = { {1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9} };

    std::cout << "Before transposition:" << std::endl;
    printMatrix(matrix);

    transposeMatrix(matrix);

    std::cout << "\nAfter transposition:" << std::endl;
    printMatrix(matrix);

    return 0;
}
