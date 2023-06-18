#include <stdio.h>

// Function to find the smallest and largest digits in a number
void findSmallestLargestDigit(int num, int *smallest, int *largest) {
    *smallest = 9;
    *largest = 0;

    while (num > 0) {
        int digit = num % 10;

        if (digit < *smallest) {
            *smallest = digit;
        }

        if (digit > *largest) {
            *largest = digit;
        }

        num /= 10;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    int i, num;
    int smallest, largest;

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        findSmallestLargestDigit(num, &smallest, &largest);
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
        printf("\n");
    }

    return 0;
}
