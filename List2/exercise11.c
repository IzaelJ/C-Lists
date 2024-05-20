#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int pares = 0;

    printf("Digite os elementos do vetor de 10 posições:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Posição %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("\nO vetor possui %d numeros pares.\n", pares);

    return 0;
}
