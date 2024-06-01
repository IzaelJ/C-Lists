#include <stdio.h>

void printDate(int day, int month, int year) {
    char *months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("%d of %s of %d\n", day, months[month], year);
}

int main() {
    int day, month, year;

    printf("Enter the current date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);

    printDate(day, month, year);

    return 0;
}
