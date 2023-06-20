#include <stdio.h>

int main() {
    int arr[] = {6, 4, 8, 4, 2, 0, 3, 6, 2, 1, 2, 5, 9, 0, 7, 2, 1, 0, 4, 5, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);  // Calculate the length of the array
    int min = arr[0];  // Assume the first element as the minimum
    int max = arr[0];  // Assume the first element as the maximum

    for (int i = 1; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Update the minimum if a smaller value is found
        }
        if (arr[i] > max) {
            max = arr[i];  // Update the maximum if a larger value is found
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
