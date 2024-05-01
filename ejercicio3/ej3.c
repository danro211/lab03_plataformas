#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10  // Define el tamano maximo para la matriz

// Funcion para encontrar el minimo de tres valores
int min(int a, int b, int c) {
    int m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    return m;
}

// Funcion para encontrar el tamano del cuadrado mas grande de unos
int findLargestSquare(int matrix[][MAX_SIZE], int size) {
    int s[size][size]; // Matriz para almacenar los resultados parciales
    int max = 0;  // Variable para rastrear el mayor tamano encontrado

    // Construir la matriz de soluciones parciales
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || j == 0) {
                s[i][j] = matrix[i][j]; // Caso base: primera fila o columna
            } else if (matrix[i][j] == 1) {
                s[i][j] = min(s[i][j-1], s[i-1][j], s[i-1][j-1]) + 1;
            } else {
                s[i][j] = 0;
            }
            if (max < s[i][j]) max = s[i][j]; // Actualizar max si es necesario
        }
    }

    return max;
}

// Funcion para llenar la matriz con valores aleatorios 0 o 1
void fillMatrix(int matrix[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 2;  // Generar 0 o 1 aleatoriamente
        }
    }
}

// Funcion para imprimir la matriz
void printMatrix(int matrix[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]); // Imprimir cada elemento de la matriz
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));  // Inicializar la semilla para la funcion rand

    int n;
    printf("Ingrese el tamano de la matriz nxn (1-10): ");
    scanf("%d", &n);  // Leer el tamano de la matriz del usuario

    // Comprobar la validez del tamano ingresado
    if (n < 1 || n > 10) {
        printf("Numero invalido. Usando tamano por defecto de 5.\n");
        n = 5;  // Usar valor por defecto si el tamano no es valido
    }

    int matrix[MAX_SIZE][MAX_SIZE]; // Declarar la matriz

    fillMatrix(matrix, n); // Llenar la matriz con valores aleatorios

    printf("La matriz utilizada corresponde a:\n");
    printMatrix(matrix, n); // Imprimir la matriz

    int largestSquareSize = findLargestSquare(matrix, n); // Calcular el cuadrado mas grande
    printf("El tamano del cuadrado mas grande de unos es: %d\n", largestSquareSize);

    return 0; // Finalizar el programa
}
