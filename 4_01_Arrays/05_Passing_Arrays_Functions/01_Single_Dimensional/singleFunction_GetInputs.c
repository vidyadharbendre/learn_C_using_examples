#include <stdio.h>

void inputArray(int farr[], int fsize); // Function to input values into the array
void printArray(int farr[], int fsize); // Function to display array elements

int main() {
    int arr[5]; // Declare an array

    inputArray(arr, 5); // Call the function to input values into the array
    printArray(arr, 5); // Call the function to display the array

    return 0;
}

void inputArray(int farr[], int fsize) {
    int fi;
    printf("Enter %d elements for the array:\n", fsize);

    for (fi = 0; fi < fsize; fi++) {
        printf("Enter element %d: ", fi + 1);
        scanf("%d", &farr[fi]); // Taking input for each element
    }
}

void printArray(int farr[], int fsize) {
    int fi;
    printf("The array elements are: ");
    for (fi = 0; fi < fsize; fi++) {
        printf("%d ", farr[fi]); // Printing all elements of the array
    }
}
