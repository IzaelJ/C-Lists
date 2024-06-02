#include <stdio.h>

int main() {
    int number = 5;
    char letter = 'a';
    float anotherNumber = 10.1;

    int *numberPointer = &number;
    char *letterPointer = &letter;
    float *anotherNumberPointer = &anotherNumber; 

    printf("Pointer of INT: %d\n", *numberPointer);
    printf("Pointer of CHAR: %c\n", *letterPointer);
    printf("Pointer of FLOAT: %f\n", *anotherNumberPointer);

    return 0;
}