#include <stdio.h>

int main(){

    // Se define variable n entera
    int n;

    // Ciclo for que itera de 0 a 100 veces inclusive
    for (n = 0; n <= 100; n++) {

        // Se calcula el numero triangular usando la formula n*(n+1)/2
        int triangular = n * (n + 1) / 2;
        // Imprimir numero
        printf("%d, ", triangular);
    }

    // Salto de linea al final de calcular numeros
    printf("\n");
    return 0;
}
