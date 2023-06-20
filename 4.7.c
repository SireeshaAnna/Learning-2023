#include <stdio.h>

int stringToInteger(const char* str) {
    int res = 0;
    int i = 0;
    
    // Check for negative sign
    if (str[0] == '-') {
        i = 1;
    }
    
    // Iterate over each character and calculate the integer value
    while (str[i] != '\0') {
        int ival = str[i] - '0'; // Convert character to integer value
        res = res * 10 + ival;
        i++;
    }
    
    // Apply negative sign if necessary
    if (str[0] == '-') {
        res = -res;
    }
    
    return res;
}

int main() {
    const char str[] = "65278";
    int num = stringToInteger(str);
    
    printf("Converted Integer: %d\n", num);
    return 0;
}
