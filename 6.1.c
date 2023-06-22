#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitialize(char* input, struct Student* students, int size) {
    char* token;
    int i = 0;

    // Tokenize the input string
    token = strtok(input, " ");

    // Parse and initialize the structures
    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, " ");
        strcpy(students[i].name, token);

        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");
        i++;
    }
}

int main() {
    int size, i;
    char input[100];
    struct Student* students;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Allocate memory for 'size' students
    students = (struct Student*)malloc(size * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    getchar(); // Consume the newline character

    printf("Enter the student data in the format 'rollno name marks':\n");
    for (i = 0; i < size; i++) {
        fgets(input, sizeof(input), stdin);
        parseAndInitialize(input, &students[i], 1);
    }

    // Display the initialized structures
    printf("\nStudent details:\n");
    for (i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}
