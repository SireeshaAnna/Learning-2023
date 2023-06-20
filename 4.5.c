#include <stdio.h>

int main() {
    int numbers[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55, 64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int sumEvenIndexed = 0;
    int sumOddIndexed = 0;

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            sumEvenIndexed += numbers[i];
        } else {
            sumOddIndexed += numbers[i];
        }
    }

    int diff = sumEvenIndexed - sumOddIndexed;

    printf("Difference between the sum of even-indexed and odd-indexed elements: %d\n", diff);

    return 0;
}
