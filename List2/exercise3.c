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

    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("O nome digitado é: %s\n", nome);
    } else {
        printf("O nome não começa com 'a' ou 'A'.\n");
    }

    return 0;
}
