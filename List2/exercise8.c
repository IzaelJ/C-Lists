#include <stdio.h>

int main() {
    int valores[6];

    printf("Entre com 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("Os valores lidos são:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
