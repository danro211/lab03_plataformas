#include <stdio.h>

int factorial(int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1;
    }
    return i;
}

int main() {
    int num, result;

    // Se pide al usuario que ingrese un numero
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &num);  // Se lee el numero introducido y se almacena en 'num'

    // Se calcula el factorial del numero ingresado
    result = factorial(num);

    // Se imprime el resultado
    printf("%d! = %d\n", num, result);

    return 0;
}

