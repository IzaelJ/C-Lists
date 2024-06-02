#include <stdio.h>

void greatestAndLowestValue(int *x, int *y) {
    if (*x > *y) {
        printf("v1 is the greatest, with the value of: %d\n", *x);
        printf("v2 is the lowest, with the value of: %d\n", *y);
    }
    else {
        printf("v2 is the greatest, with the value of: %d\n", *y);
        printf("v1 is the lowest, with the value of: %d\n", *x);
    }
}

int main() {
    int v1, v2;

    printf("Write the value for v1:\n");
    scanf("%d", &v1);
    getchar();
    

    printf("Write the value for v2:\n");
    scanf("%d", &v2);
    getchar();
  
    greatestAndLowestValue(&v1, &v2);

    return 0;
}