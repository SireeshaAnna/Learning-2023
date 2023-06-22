#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;

    // Convert both time periods to seconds
    int time1InSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int time2InSeconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the absolute difference in seconds
    int differenceInSeconds = time1InSeconds - time2InSeconds;
    if (differenceInSeconds < 0)
        differenceInSeconds = -differenceInSeconds;

    // Convert the difference back to hours, minutes, and seconds
    diff.hours = differenceInSeconds / 3600;
    differenceInSeconds %= 3600;
    diff.minutes = differenceInSeconds / 60;
    differenceInSeconds %= 60;
    diff.seconds = differenceInSeconds;

    return diff;
}

int main() {
    struct Time startTime, endTime, diffTime;

    printf("Enter start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    diffTime = calculateTimeDifference(startTime, endTime);

    printf("Time difference: %02d:%02d:%02d\n", diffTime.hours, diffTime.minutes, diffTime.seconds);

    return 0;
}
