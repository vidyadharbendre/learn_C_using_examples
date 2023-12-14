#include <stdio.h>

void inputArray(int farr[], int fsize); // Function to input values into the array
void printArray(int farr[], int fsize); // Function to display array elements
int findMax(int farr[], int fsize); // Function to find the maximum value in the array

int main() {
    int arr[5], max; // Declare an array

    inputArray(arr, 5); // Call the function to input values into the array
    printArray(arr, 5); // Call the function to display the array

    max = findMax(arr, 5); // Call the function to find the maximum value
    printf("\nThe maximum value in the array is: %d\n", max);

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

int findMax(int farr[], int fsize) {
    int max = farr[0]; // Initialize max with the first element of the array

    // Iterate through the array to find the maximum value
    for (int fi = 1; fi < fsize; fi++) {
        if (farr[fi] > max) {
            max = farr[fi]; // Update max if a larger value is found
        }
    }

    return max; // Return the maximum value found
}

// the output of the above program is:
/* . 
Enter 5 elements for the array:
Enter element 1: 44
Enter element 2: 1
Enter element 3: 09
Enter element 4: 55
Enter element 5: 7
The array elements are: 44 1 9 55 7 
The maximum value in the array is: 55
*/