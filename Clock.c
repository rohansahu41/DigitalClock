#include <stdio.h>
#include <time.h>
#include <unistd.h>  // for sleep()

int main() {
    while (1) {
        time_t raw_time;
        struct tm *time_info;

        // Get current system time
        time(&raw_time);
        time_info = localtime(&raw_time);

        // Print time in HH:MM:SS format
        printf("\r%02d:%02d:%02d", 
               time_info->tm_hour, 
               time_info->tm_min, 
               time_info->tm_sec);

        fflush(stdout); // Ensure output is displayed immediately
        sleep(1);       // Wait for 1 second
    }

    return 0;
}

