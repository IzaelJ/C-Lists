#include <stdio.h>

int main() {
    int v1 = 5, v2 = 10;

    if (&v1 > &v2) {
        printf("The number with greatest address is: %d, with the following address: %p.", v1, &v1);
    }
    else {
        printf("The number with greatest address is: %d, with the following address: %p", v2, &v2);
    }

    return 0;
}