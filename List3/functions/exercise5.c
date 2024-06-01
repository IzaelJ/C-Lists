#include <stdio.h>

int convertToSeconds(int hours, int minutes, int seconds) {
    int totalSeconds = 0;
    totalSeconds += hours * 3600; 
    totalSeconds += minutes * 60;   
    totalSeconds += seconds;       
    return totalSeconds;
}

int main() {
    int hours, minutes, seconds;

    printf("Enter the time (hours minutes seconds): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    int totalSeconds = convertToSeconds(hours, minutes, seconds);

    printf("The time %d:%d:%d is equivalent to %d seconds.\n", hours, minutes, seconds, totalSeconds);

    return 0;
}
