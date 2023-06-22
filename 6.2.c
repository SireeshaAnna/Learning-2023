#include <stdio.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void initializeStudents(Student* students, int size) {
    int i;

    for (i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

int main() {
    int size, i;
    Student students[5];

    size = sizeof(students) / sizeof(Student);

    // Initialize all the members of the array of structures
    initializeStudents(students, size);

    // Display the initialized structures
    printf("Student details after initialization:\n");
    for (i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
