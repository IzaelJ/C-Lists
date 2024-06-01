#include <stdio.h>

typedef struct Time {
    int hour;
    int minutes;
    int seconds;
} ;

struct Date {
    int day;
    int month;
    int year;
};

struct Commitment {
    Date date;
    Time time;
    char text[50];
};

int main() {
    return 0;
}
