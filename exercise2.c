#include <stdio.h>

// Function to print the bits of a 32-bit integer
void printBits(unsigned int num) {
    int i;
    int size = sizeof(num) * 8;  // Total number of bits in unsigned int

    // Iterate through each bit starting from the most significant bit
    for (i = size - 1; i >= 0; i--) {
        unsigned int mask = 1 << i;
        printf("%d", (num & mask) ? 1 : 0);

        // Print a space after every 8 bits for better readability
        if (i % 8 == 0)
            printf(" ");
    }

    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits of the entered number: ");
    printBits(num);

    return 0;
}
