#include <stdio.h>
#include <math.h>

// 1. Programa para calcular a raiz quadrada ou o quadrado de um número:


int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        float raiz_quadrada = sqrt(numero);
        printf("Raiz quadrada do número: %.2f\n", raiz_quadrada);
    } else {
        float quadrado = pow(numero, 2);
        printf("Quadrado do número: %.2f\n", quadrado);
    }

    return 0;
}