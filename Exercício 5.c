#include <stdio.h>

// 5. Programa para verificar em qual intervalo um número se encontra:


int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero == 5 || numero == 200 || numero == 400) {
        printf("O número está em um dos escopos específicos.\n");
    } else if (numero >= 500 && numero <= 1000) {
        printf("O número está no intervalo de 500 a 1000.\n");
    } else {
        printf("O número está fora dos escopos anteriores.\n");
    }

    return 0;
}