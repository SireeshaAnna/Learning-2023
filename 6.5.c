#include <stdio.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

int searchStudentByName(Student* students, int size, const char* name) {
    int i;

    for (i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i; // Return the index if the name matches
        }
    }

    return -1; // Return -1 if the name is not found
}

int main() {
    int size, i, searchIndex;
    Student students[5];
    char searchName[20];

    size = sizeof(students) / sizeof(Student);

    // Initialize the array of structures with some values
    students[0].rollno = 1;
    strcpy(students[0].name, "John");
    students[0].marks = 85.5;

    students[1].rollno = 2;
    strcpy(students[1].name, "Emma");
    students[1].marks = 78.2;

    students[2].rollno = 3;
    strcpy(students[2].name, "Michael");
    students[2].marks = 92.8;

    students[3].rollno = 4;
    strcpy(students[3].name, "Sophia");
    students[3].marks = 67.9;

    students[4].rollno = 5;
    strcpy(students[4].name, "William");
    students[4].marks = 91.1;

    // Get the name to search from the user
    printf("Enter the name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove the trailing newline character

    // Perform the search operation
    searchIndex = searchStudentByName(students, size, searchName);

    // Display the search result
    if (searchIndex != -1) {
        printf("Student found at index %d\n", searchIndex);
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[searchIndex].rollno, students[searchIndex].name, students[searchIndex].marks);
    } else {
        printf("Student not found\n");
    }

    return 0;
}
