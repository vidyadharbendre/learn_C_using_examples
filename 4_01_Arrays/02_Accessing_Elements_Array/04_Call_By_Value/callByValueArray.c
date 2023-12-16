#include <stdio.h>

void modifyByValue(int fdata[], int fcount);

int main(){
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
    displayData(data, count);

    // Modify array using call by value (copy)
    modifyByValue(data, count);
    printf("Modified by value ");
    displayData(data, count);

    return 0;

}
// Function to modify the array using call by value (copying the array)
void modifyByValue(int fdata[], int fcount) {
    for (int i = 0; i < fcount; ++i) {
        fdata[i] += 5;  // Modifying elements of the array by adding 5 to each value
    }
}
