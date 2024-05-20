#include <stdio.h>

int main() {
    char str[100];

    printf("Entre com uma string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0') {
            str[i] = '1';
        }
    }

    printf("String modificada: %s\n", str);

    return 0;
}