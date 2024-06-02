#include <stdio.h>

int main() {
    int v1, v2;

    printf("Write the value for v1:\n");
    scanf("%d", &v1);
    getchar();

    printf("Write the value for v2:\n");
    scanf("%d", &v2);
    getchar();

    if (&v1 > &v2) {
        printf("The number with greatest address is: %d, with the following address: %p", v1, &v1);
    }
    else {
        printf("The number with greatest address is: %d, with the following address: %p", v2, &v2);
    }

    return 0;
}