#include <stdio.h>

// 4. Programa para ordenar três valores em ordem descendente:


int main() {
    int a, b, c;

    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    int temp;

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Valores em ordem descendente: %d %d %d\n", a, b, c);

    return 0;
}