#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box* box) {
    double length = box->length;
    double width = box->width;
    double height = box->height;
    
    double topArea = length * width;
    double sideArea1 = length * height;
    double sideArea2 = width * height;
    
    return 2 * (topArea + sideArea1 + sideArea2);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;
    
    // Initialize the box dimensions
    boxPtr->length = 4.0;
    boxPtr->width = 2.0;
    boxPtr->height = 3.0;
    
    // Calculate volume and surface area
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);
    
    // Display the results
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    
    return 0;
}