#include <stdio.h>

struct Vector {
    float x;
    float y;
    float z;
};

struct Vector addVectors(struct Vector vector1, struct Vector vector2) {
    struct Vector result;
    result.x = vector1.x + vector2.x;
    result.y = vector1.y + vector2.y;
    result.z = vector1.z + vector2.z;
    return result;
}

int main() {
    struct Vector vector1, vector2, sum;

    printf("Enter the coordinates of the first vector (x y z): ");
    scanf("%f %f %f", &vector1.x, &vector1.y, &vector1.z);

    printf("Enter the coordinates of the second vector (x y z): ");
    scanf("%f %f %f", &vector2.x, &vector2.y, &vector2.z);

    sum = addVectors(vector1, vector2);

    printf("The sum of the vectors results in the vector (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);

    return 0;
}
