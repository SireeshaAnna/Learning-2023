#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void swapFields(Point* p1, Point* p2) {
    Point temp;

    // Swap the entire structures
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    Point point1, point2;

    // Initialize the points
    point1.x = 2;
    point1.y = 3;
    point2.x = 4;
    point2.y = 6;

    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields
    swapFields(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
