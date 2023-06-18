#include <stdio.h>

// Function to swap two values of any type using pointers
void swap(void* a, void* b, size_t size) {
    char* temp = (char*)malloc(size);

    // Copy the value at 'a' to 'temp'
    memcpy(temp, a, size);

    // Copy the value at 'b' to 'a'
    memcpy(a, b, size);

    // Copy the value in 'temp' to 'b'
    memcpy(b, temp, size);

    // Free the temporary memory
    free(temp);
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap two integers
    swap(&num1, &num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    float float1 = 3.14, float2 = 2.71;
    printf("Before swapping: float1 = %.2f, float2 = %.2f\n", float1, float2);

    // Swap two floats
    swap(&float1, &float2, sizeof(float));
    printf("After swapping: float1 = %.2f, float2 = %.2f\n", float1, float2);

    char char1 = 'A', char2 = 'B';
    printf("Before swapping: char1 = %c, char2 = %c\n", char1, char2);

    // Swap two characters
    swap(&char1, &char2, sizeof(char));
    printf("After swapping: char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
