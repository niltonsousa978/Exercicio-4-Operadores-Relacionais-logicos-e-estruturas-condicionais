#include <stdio.h>

// Programa para encontrar o maior e o menor valor entre quatro números:


int main() {
    int a, b, c, d;

    printf("Digite os valores de A, B, C e D: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int maior = a;
    int menor = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    if (d > maior) {
        maior = d;
    }

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    if (d < menor) {
        menor = d;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}