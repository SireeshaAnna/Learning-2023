#include <stdio.h>

int findMaxUsingIfElse(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int findMaxUsingTernary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int a = 10;
    int b = 20;
    int max;

    // Using if-else
    max = findMaxUsingIfElse(a, b);
    printf("Using if-else: The maximum number is %d\n", max);

    // Using ternary operator
    max = findMaxUsingTernary(a, b);
    printf("Using ternary operator: The maximum number is %d\n", max);

    return 0;
}
