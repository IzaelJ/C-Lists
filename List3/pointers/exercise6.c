#include <stdio.h>

int sumOfDouble(int *x, int *y) {
    *x = *x * 2;
    *y = *y * 2;
    return *x + *y;
}

int main() {
    int A, B, sum;

    printf("Write the value for A:\n");
    scanf("%d", &A);
    getchar();
    

    printf("Write the value for B:\n");
    scanf("%d", &B);
    getchar();

    printf("The value of A is: %d\n", A);
    printf("The value of B is: %d\n", B);  

    sum = sumOfDouble(&A, &B);

    printf("The double of A is: %d\n", A);
    printf("The double of B is: %d\n", B);  

    printf("The sum of the double of each is: %d\n", sum);  

    return 0;
}