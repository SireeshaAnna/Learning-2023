#include <stdio.h>

void printExponent(double value) {
    unsigned long long *ptr = (unsigned long long *)&value;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Hexadecimal format
    printf("Hexadecimal: 0x%llX\n", exponent);

    // Binary format
    printf("Binary: 0b");
    for (int i = 11; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}
