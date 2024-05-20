#include <stdio.h>

#define TAMANHO 10

int main() {
    float numeros[TAMANHO], quadrados[TAMANHO];

    printf("Digite %d números reais:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        quadrados[i] = numeros[i] * numeros[i];
    }

    printf("\nNúmeros lidos:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", numeros[i]);
    }

    printf("\n\nQuadrados dos números:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", quadrados[i]);
    }
    printf("\n");

    return 0;
}
