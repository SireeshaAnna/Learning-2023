#include <stdio.h>

int main() {
    int numbers[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56, 56, 84, 20, 36, 12, 90, 72, 10, 45, 64, 56, 45, 20, 36, 12, 90, 72, 10, 84, 64, 56, 45, 10, 36, 12, 90, 72, 20, 84, 64, 56, 45, 10, 72, 12, 90, 36, 20, 84, 64, 56, 45, 10, 72, 90, 12, 36, 20, 84, 64};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < length; i++) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    int diff = sumEven - sumOdd;

    printf("Difference between the sum of even and odd elements: %d\n", diff);

    return 0;
}
