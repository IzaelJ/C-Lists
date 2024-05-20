#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    printf("Entre com uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    int i = 0;
    while (palavra[i] != '\0') {
        if (palavra[i] == '\n') {
            palavra[i] = '\0';
            break;
        }
        i++;
    }

    int length = 0;
    while (palavra[length] != '\0') {
        length++;
    }

    printf("A palavra de trás para frente é: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(palavra[i]);
    }
    printf("\n");

    return 0;
}
