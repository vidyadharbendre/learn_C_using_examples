#include <stdio.h>

void inputArray(int farr[], int fsize); // Function to input values into the array
void printArray(int farr[], int fsize); // Function to display array elements
int findMax(int farr[], int fsize); // Function to find the maximum value in the array
int recursiveMax(int farr[], int fsize); // Recursive function to find the maximum value

int main() {
    int arr[5], max; // Declare an array

    inputArray(arr, 5); // Call the function to input values into the array
    printArray(arr, 5); // Call the function to display the array

    max = findMax(arr, 5); // Call the function to find the maximum value iteratively
    printf("\nThe maximum value in the array using iterative method is: %d\n", max);

    max = recursiveMax(arr, 5); // Call the function to find the maximum value recursively
    printf("The maximum value in the array using recursive method is: %d\n", max);

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
    int max = farr[0];
    int fi; // Initialize max with the first element of the array

    // Iterate through the array to find the maximum value
    for (fi = 1; fi < fsize; fi++) {
        if (farr[fi] > max) {
            max = farr[fi]; // Update max if a larger value is found
        }
    }

    return max; // Return the maximum value found
}

int recursiveMax(int farr[], int fsize) {
    int subMax;
    // Base case: If only one element is left, return that element
    if (fsize == 1) {
        return farr[0];
    }

    // Recursive call to find the maximum value of the rest of the array
    subMax = recursiveMax(farr + 1, fsize - 1);

    // Compare the first element with the maximum value of the rest of the array
    return (farr[0] > subMax) ? farr[0] : subMax;
}

/*   
nter 5 elements for the array:
Enter element 1: 4
Enter element 2: 77
Enter element 3: 22
Enter element 4: 7
Enter element 5: 0
The array elements are: 4 77 22 7 0 
The maximum value in the array using iterative method is: 77
The maximum value in the array using recursive method is: 77
*/