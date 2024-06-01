#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Student {
    char name[50];
    int grr;
    float first_partial;
    float second_partial;
    float third_partial;
};

void studentSum(struct Student students[5], float sumArray[5]);
int findGreatestPartial(struct Student students[5], float sumArray[5]);
int findLowestPartial(struct Student students[5], float sumArray[5]);
bool isApproved(float totalPartial);

int main() {
    struct Student students[5];
    float sumArray[5];

    for (int i = 0; i < 5; i++) {
        printf("Write the Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Write the GRR: ");
        scanf("%d", &students[i].grr);
        getchar();
        printf("Write the First Partial: ");
        scanf("%f", &students[i].first_partial);
        getchar();
        printf("Write the Second Partial: ");
        scanf("%f", &students[i].second_partial);
        getchar();
        printf("Write the Third Partial: ");
        scanf("%f", &students[i].third_partial);
        getchar();
    }

    studentSum(students, sumArray);

    int greatestIndex = findGreatestPartial(students, sumArray);
    printf("\nThe student with the greatest general partial is: %s with a grade of %.2f\n", students[greatestIndex].name, sumArray[greatestIndex]);

    int lowestIndex = findLowestPartial(students, sumArray);
    printf("The student with the lowest general partial is: %s with a grade of %.2f\n", students[lowestIndex].name, sumArray[lowestIndex]);

    printf("\n\n---- Approval Status ----\n");
    for (int i = 0; i < 5; i++) {
        bool approved = isApproved(sumArray[i]);
        printf("%s: %s\n", students[i].name, approved ? "Approved" : "Not Approved");
    }

    return 0;
}

void studentSum(struct Student students[5], float sumArray[5]) {
    for (int i = 0; i < 5; i++) {
        sumArray[i] = students[i].first_partial + students[i].second_partial + students[i].third_partial;
    }
}

int findGreatestPartial(struct Student students[5], float sumArray[5]) {
    int greatestIndex = 0;
    float greatestGrade = sumArray[0];
    for (int i = 1; i < 5; i++) {
        if (sumArray[i] > greatestGrade) {
            greatestGrade = sumArray[i];
            greatestIndex = i;
        }
    }
    return greatestIndex;
}

int findLowestPartial(struct Student students[5], float sumArray[5]) {
    int lowestIndex = 0;
    float lowestGrade = sumArray[0];
    for (int i = 1; i < 5; i++) {
        if (sumArray[i] < lowestGrade) {
            lowestGrade = sumArray[i];
            lowestIndex = i;
        }
    }
    return lowestIndex;
}

bool isApproved(float totalPartial) {
    return totalPartial >= 18.0f;
}
