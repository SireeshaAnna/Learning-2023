#include <stdio.h>

int stringToInt(char *str) {
    int res = 0;
    int i = 0;

    while (str[i] != '\0') {
        int ival = str[i] - '0'; // Convert character to integer value

        res = res * 10 + ival;

        i++;
    }

    return res;
}

int main() {
    char str[] = "5278";
    int result = stringToInt(str);

    printf("Input String: %s\n", str);
    printf("Integer Value: %d\n", result);

    return 0;
}
