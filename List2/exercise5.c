#include <stdio.h>

int string_length(char str[]);

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

    int length = string_length(nome);
    printf("O nome tem %d letras.\n", length);

    return 0;
}

int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
