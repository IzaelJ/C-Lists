#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int maior, menor;

    printf("Digite os elementos do vetor de 10 posições:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Posição %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }
    }

    printf("\nO maior elemento do vetor é: %d\n", maior);
    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}
