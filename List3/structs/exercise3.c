#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int grr;
    char course[50];
};

struct Student students[5];

int main() {

    for (int i = 0; i < 5; i++) {
        printf("Write the Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Write the Course: ");
        fgets(students[i].course, sizeof(students[i].course), stdin);
        printf("Write the GRR: ");
        scanf("%d", &students[i].grr);
        getchar();
    }

    for (int i = 0; i < 5; i++) {
        printf("\nName: %s", students[i].name);
        printf("Age: %d", students[i].grr);
        printf("\nAddress: %s", students[i].course);
    }

    return 0;
}
