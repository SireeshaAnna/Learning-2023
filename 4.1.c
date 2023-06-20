#include <stdio.h>

int main() {
    int arr[] = {1, 2, 1, 8, 4, 9, 6, 2, 2, 0, 1, 1, 6, 8, 4, 5, 3, 9, 9, 9, 9, 0, 4, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);  // Calculate the length of the array
    int sum = 0;
    double avg;

    for (int i = 0; i < len; i++) {
        sum = sum + arr[i];  // Add each element to the sum
    }

    avg = (double)sum / len;  // Calculate the average (cast sum to double for decimal result)

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
