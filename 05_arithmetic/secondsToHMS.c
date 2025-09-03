/*
    Program converts the given number of seconds to HMS
    
    05 seconds -> 0 hours, 1 minute, 5 seconds
    3690 seconds -> 1 hour, 1 minute, 30 seconds
    
*/

#include <stdio.h> 

int main(void) {
    int seconds = 0;

    // getting seconds
    puts("Enter the number of seonds:");
    scanf("%d", &seconds);

    if (seconds < 0) {
        puts("seconds cannot be negative");
        return 0;
    }
    // calculate the number of minutes
    int minutes = seconds / 60;
    int remaining_seconds = seconds % 60; // seconds - (minutes / 60 * 60)

    // calculate the number of hours and change the output
    int hours = minutes / 60;
    int remaining_minutes = minutes % 60;

    // selection statment
    // < > <= >=

    if (seconds > 0) {
        // Print the result
        printf("%d seconds is %d hours %d minutes and %d seconds\n", seconds, hours, remaining_minutes, remaining_seconds);
    }

    return(0);
}