#include <stdio.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void sortStudents(Student* students, int size) {
    int i, j;
    Student temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, i;
    Student students[5];

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

    // Sort the array of structures based on marks
    sortStudents(students, size);

    // Display the sorted structures
    printf("Student details after sorting:\n");
    for (i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
