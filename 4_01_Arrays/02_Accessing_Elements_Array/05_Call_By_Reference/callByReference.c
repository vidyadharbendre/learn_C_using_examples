#include <stdio.h>

void modifyByReference(int fdata[], int fcount);

int main() {
    int count;
    printf("Enter total length of an Array: ");
    scanf("%d", &count);
    int data[count];

    printf("Enter data points for the array:\n");
    for (int i = 0; i < count; ++i) {
        scanf("%d", &data[i]);
    }

    // Display original array
    printf("Original ");
    for (int i = 0; i < count; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // Modify array using call by reference
    modifyByReference(data, count);
    
    // Display modified array
    printf("Modified by reference ");
    for (int i = 0; i < count; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}

// Function to modify the array using call by reference
void modifyByReference(int fdata[], int fcount) {
    for (int i = 0; i < fcount; ++i) {
        fdata[i] *= 2;  // Modifying elements of the array by doubling each value
    }
}
