#include <stdio.h>

#define TAMANHO 8

int main() {
    int vetor[TAMANHO];
    int x, y;

    printf("Digite os elementos do vetor de 8 posições:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite as posições X e Y (entre 0 e 7):\n");
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);

    if (x < 0 || x >= TAMANHO || y < 0 || y >= TAMANHO) {
        printf("Posições inválidas.\n");
        return 1; 
    }

    int soma = vetor[x] + vetor[y];

    printf("\nA soma dos valores nas posições %d e %d é: %d\n", x, y, soma);

    return 0;
}