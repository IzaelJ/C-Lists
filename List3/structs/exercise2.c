#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
    char address[50];
};

int main() {
    struct Person newPerson;

    printf("Write the Name: ");
    fgets(newPerson.name, sizeof(newPerson.name), stdin);
    printf("Write the Address: ");
    fgets(newPerson.address, sizeof(newPerson.address), stdin);
    printf("Write the Age: ");
    scanf("%d", &newPerson.age);

    printf("\nName: %s", newPerson.name);
    printf("Age: %d", newPerson.age);
    printf("\nAddress: %s", newPerson.address);

    return 0;
}
