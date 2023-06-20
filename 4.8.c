#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int computeTotalSeconds(char *input) {
    char *token;
    int hours, minutes, seconds;

    // Split the input string into hours, minutes, and seconds
    token = strtok(input, ":");
    hours = atoi(token);

    token = strtok(NULL, ":");
    minutes = atoi(token);

    token = strtok(NULL, ":");
    seconds = atoi(token);

    // Compute the total seconds
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;

    return totalSeconds;
}

int main() {
    char input[] = "10:12:50";
    int totalSeconds = computeTotalSeconds(input);

    printf("Input String: %s\n", input);
    printf("Total Seconds: %d\n", totalSeconds);

    return 0;
}
