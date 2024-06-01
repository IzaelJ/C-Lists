#include <stdio.h>

#define MAX_STUDENTS 10

struct Student {
    int registration;
    char name[50];
    int discipline_code;
    float grade1;
    float grade2;
    float final_grade;
};

void calculateFinalGrades(struct Student students[], int num_students) {
    for (int i = 0; i < num_students; i++) {
        students[i].final_grade = (students[i].grade1 * 1.0 + students[i].grade2 * 2.0) / 3.0;
    }
}

void displayStudentList(struct Student students[], int num_students) {
    printf("\nStudent List:\n");
    printf("Registration  Name                  Discipline Code  Final Grade\n");
    for (int i = 0; i < num_students; i++) {
        printf("%-13d%-22s%-16d%.2f\n", students[i].registration, students[i].name, students[i].discipline_code, students[i].final_grade);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int num_students;

    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &num_students);

    if (num_students > MAX_STUDENTS || num_students <= 0) {
        printf("Invalid number of students. Please enter a number between 1 and %d.\n", MAX_STUDENTS);
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Registration: ");
        scanf("%d", &students[i].registration);
        printf("Name: ");
        scanf(" %c[^\n]", students[i].name);
        printf("Discipline Code: ");
        scanf("%d", &students[i].discipline_code);
        printf("Grade 1: ");
        scanf("%f", &students[i].grade1);
        printf("Grade 2: ");
        scanf("%f", &students[i].grade2);
    }

    calculateFinalGrades(students, num_students);
    displayStudentList(students, num_students);

    return 0;
}
