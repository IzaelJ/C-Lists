#include <stdio.h>

int checkNumber(int num) {
    if (num > 0) {
        return 1; 
    } else if (num < 0) {
        return -1; 
    } else {
        return 0; 
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = checkNumber(number);

    if (result == 1) {
        printf("The number is positive.\n");
    } else if (result == -1) {
        printf("The number is negative.\n");
    } else {
        printf("The number is equal to zero.\n");
    }

    return 0;
}
