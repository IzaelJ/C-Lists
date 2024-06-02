#include <stdio.h>

void swapValues(int *x, int *y) {
    int c = *y;
    *y = *x;
    *x = c;
}

int main() {
    int v1, v2;

    printf("Write the value for v1:\n");
    scanf("%d", &v1);
    getchar();
    

    printf("Write the value for v2:\n");
    scanf("%d", &v2);
    getchar();
    printf("The value of v1 is: %d, with the following address: %p\n", v1, &v1);
    printf("The value of v2 is: %d, with the following address: %p\n", v2, &v2);

    swapValues(&v1, &v2);

    printf("Now the value of v1 is: %d, with the following address: %p\n", v1, &v1);
    printf("Now the value of v2 is: %d, with the following address: %p\n", v2, &v2);

    return 0;
}