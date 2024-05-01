#include <stdio.h>

#define SIZE 5

int findLargestSquare(int matrix[][SIZE]) {
    // Su implementacion
}

int main() {
    int matrix[SIZE][SIZE] = {
        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 0, 1, 0, 1}
    };

    int largestSquareSize = findLargestSquare(matrix);
    printf("El tamaño del cuadrado más grande de unos es: %d\n", largestSquareSize);

    return 0;
}
