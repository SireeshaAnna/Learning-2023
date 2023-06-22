#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
};

void readDataFromFile(struct LogEntry entries[], int* count) {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Error opening data.csv file.\n");
        return;
    }

    char line[100];
    int lineCount = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        if (lineCount == 0) {  // Skip the header line
            lineCount++;
            continue;
        }

        char* token = strtok(line, ",");
        int fieldCount = 0;

        while (token != NULL) {
            switch (fieldCount) {
                case 0:
                    entries[lineCount - 1].entryNo = atoi(token);
                    break;
                case 1:
                    strncpy(entries[lineCount - 1].sensorNo, token, sizeof(entries[lineCount - 1].sensorNo) - 1);
                    entries[lineCount - 1].sensorNo[sizeof(entries[lineCount - 1].sensorNo) - 1] = '\0';
                    break;
                case 2:
                    entries[lineCount - 1].temperature = atof(token);
                    break;
                case 3:
                    entries[lineCount - 1].humidity = atoi(token);
                    break;
                case 4:
                    entries[lineCount - 1].light = atoi(token);
                    break;
                case 5:
                    strncpy(entries[lineCount - 1].timestamp, token, sizeof(entries[lineCount - 1].timestamp) - 1);
                    entries[lineCount - 1].timestamp[sizeof(entries[lineCount - 1].timestamp) - 1] = '\0';
                    break;
            }

            token = strtok(NULL, ",");
            fieldCount++;
        }

        lineCount++;
    }

    *count = lineCount - 1;

    fclose(file);
}

void displayLogEntries(struct LogEntry entries[], int count) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.1f\t\t%d\t\t%d\t%s\n", entries[i].entryNo, entries[i].sensorNo,
               entries[i].temperature, entries[i].humidity, entries[i].light, entries[i].timestamp);
    }
}

int main() {
    struct LogEntry entries[MAX_ENTRIES];
    int count = 0;

    readDataFromFile(entries, &count);
    displayLogEntries(entries, count);

    return 0;
}