#include <stdio.h>

int returnDouble(int number) {
    return number += number;
}

int main() {
    int number = 10;
    printf("%d", returnDouble(number));

    return 0;
}