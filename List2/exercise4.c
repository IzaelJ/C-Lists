#include <stdio.h>

int main() {
    char nome[100];

    printf("Entre com um nome: ");
    fgets(nome, sizeof(nome), stdin);

    int i = 0;
    while (nome[i] != '\0') {
        if (nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
        i++;
    }

    printf("As 4 primeiras letras são: ");
    for (i = 0; i < 4 && nome[i] != '\0'; i++) {
        putchar(nome[i]);
    }
    printf("\n");

    return 0;
}