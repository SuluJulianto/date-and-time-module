#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    // Define Indonesia timezone
    putenv("TZ=Asia/Jakarta");

    // Get current time in Indonesia timezone
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    printf("Time in seconds since epoch: %ld\n", rawtime);

    printf("\nCurrent date and time: %s", asctime(timeinfo));

    // Format the current date and time
    strftime(buffer, sizeof(buffer), "%y-%m-%d-%H-%M", timeinfo);
    printf("\nFormatting the current date and time: %s\n", buffer);

    // Extract and display specific date components
    printf("\nCurrent Year: %d\n", timeinfo->tm_year + 1900);
    printf("Current Month of the year: %d\n", timeinfo->tm_mon + 1);
    printf("Day of the month: %d\n", timeinfo->tm_mday);
    printf("Day of the week: %d\n", timeinfo->tm_wday);

    return 0;
}
