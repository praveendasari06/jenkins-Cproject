#include <stdio.h>
#include <time.h>

int date() {
    time_t current_time;
    struct tm *local_time;

    // Get the current time
    time(&current_time);

    // Convert it to local time format
    local_time = localtime(&current_time);

    // Display date and time
    printf("Current Date: %02d-%02d-%d\n",
           local_time->tm_mday,
           local_time->tm_mon + 1,
           local_time->tm_year + 1900);

    printf("Current Time: %02d:%02d:%02d\n",
           local_time->tm_hour,
           local_time->tm_min,
           local_time->tm_sec);

    // Array of days
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("Day of the Week: %s\n", days[local_time->tm_wday]);

    // return 0;
}

