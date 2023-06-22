#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(char* sourcePath, char* destinationPath) {
    FILE* sourceFile = fopen(sourcePath, "r");
    FILE* destinationFile = fopen(destinationPath, "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Error opening files.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully!\n");

    fclose(sourceFile);
    fclose(destinationFile);
}

void changeToUpperCase(char* filePath) {
    FILE* file = fopen(filePath, "r+");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        fputc(toupper(ch), file);
    }

    printf("File content changed to upper case!\n");

    fclose(file);
}

void changeToLowerCase(char* filePath) {
    FILE* file = fopen(filePath, "r+");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        fputc(tolower(ch), file);
    }

    printf("File content changed to lower case!\n");

    fclose(file);
}

void changeToPurelyUpperCase(char* filePath) {
    FILE* file = fopen(filePath, "r+");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch))
            fputc(toupper(ch), file);
        else
            fputc(ch, file);
    }

    printf("File content changed to purely upper case!\n");

    fclose(file);
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments!\n");
        return 0;
    }

    char* sourcePath = argv[1];
    char* destinationPath = argv[2];

    if (argc == 3) {
        copyFile(sourcePath, destinationPath);
    } else {
        char* option = argv[3];
        if (option[0] == '-') {
            switch (option[1]) {
                case 'u':
                    changeToUpperCase(sourcePath);
                    break;
                case '1':
                    changeToLowerCase(sourcePath);
                    break;
                case 's':
                    changeToPurelyUpperCase(sourcePath);
                    break;
                default:
                    printf("Invalid option!\n");
                    break;
            }
        } else {
            printf("Invalid option!\n");
        }
    }

    return 0;
}