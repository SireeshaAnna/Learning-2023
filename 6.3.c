#include <stdio.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void displayStudents(Student* students, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

int main() {
    int size, i;
    Student students[5];

    size = sizeof(students) / sizeof(Student);

    // Display all the members of the array of structures
    displayStudents(students, size);

    return 0;
}
