#include <stdio.h>

#define TAMANHO 6

int main() {
    int valores[TAMANHO];

    printf("Digite 6 valores inteiros pares:\n");
    for (int i = 0; i < TAMANHO; i++) {
        do {
            printf("Valor %d: ", i + 1);
            scanf("%d", &valores[i]);
            if (valores[i] % 2 != 0) {
                printf("Por favor, digite um valor par.\n");
            }
        } while (valores[i] % 2 != 0);
    }

    printf("\nValores na ordem inversa:\n");
    for (int i = TAMANHO - 1; i >= 0; i--) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
