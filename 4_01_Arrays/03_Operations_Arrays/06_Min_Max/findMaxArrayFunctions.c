/* 
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
16 December 2023

Purpose: 
Program to demonstrate different methods to find the largest element in an array.

Description:
This program showcases various techniques to find the largest element within a predefined array.
It utilizes functions to perform specific tasks such as inputting data, displaying the array, and finding the largest element using different approaches like a dedicated function, iteration without a dedicated function, and a recursive function.

Explanation:
- The program starts by declaring necessary functions for inputting data, displaying the array, and finding the largest element in various ways.
- In the main function, it initializes an array and prompts the user to input values into the array.
- It then displays the entered array elements.
- Three different methods are used to find the largest element:
    1. Using a dedicated function (`findLargestElement`): Iterates through the array to find the largest element.
    2. Without a dedicated function (`findLargestElementNoFunction`): Iterates through the array directly in the main function.
    3. Using a recursive approach (`findLargestElementRecursive`): Finds the largest element using recursion.
- Each method is called in the main function, and the largest element found by each approach is displayed.

Functions:
- inputData(): Takes input data and populates the array.
- displayArray(): Displays the contents of the array.
- findLargestElement(): Finds the largest element using a dedicated function.
- findLargestElementNoFunction(): Finds the largest element without a dedicated function.
- findLargestElementRecursive(): Finds the largest element using recursion.
*/

#include <stdio.h>

#define MAX_SIZE_OF_AN_ARRAY 5

// Function declarations
void inputData(int f_array[], int f_size);
void displayArray(int f_array[], int f_size);
int findLargestElement(int f_array[], int f_size, int *f_index);
int findLargestElementNoFunction(int f_array[], int f_size);
int findLargestElementRecursive(int f_array[], int f_size);

int main(){
    int array[MAX_SIZE_OF_AN_ARRAY];
    int largestElement, index_position;

    printf("Enter data for an array of the length %d\n", MAX_SIZE_OF_AN_ARRAY);

    // Function call to input data
    inputData(array, MAX_SIZE_OF_AN_ARRAY);

    // Function call to display the array
    printf("Entered array elements:\n");
    displayArray(array, MAX_SIZE_OF_AN_ARRAY);

    // Function call to find the largest element using dedicated function
    largestElement = findLargestElement(array, MAX_SIZE_OF_AN_ARRAY, &index_position);
    printf("The largest element in the array using a dedicated function is: %d\n", largestElement);

    // Function call to find the largest element without using a dedicated function
    largestElement = findLargestElementNoFunction(array, MAX_SIZE_OF_AN_ARRAY);
    printf("The largest element in the array without using a dedicated function is: %d\n", largestElement);

    // Function call to find the largest element using recursion
    largestElement = findLargestElementRecursive(array, MAX_SIZE_OF_AN_ARRAY);
    printf("The largest element in the array using recursion is: %d\n", largestElement);

    return 0;
}

// Function definitions

// Function to input data into the array
void inputData(int f_array[], int f_size){
    int i;
    for(i = 0; i < f_size; i++){
        printf("Enter data for the position %d : ", i);
        scanf("%d", &f_array[i]);
    }
}

// Function to display the elements of the array
void displayArray(int f_array[], int f_size){
    int i;
    for(i=0; i < f_size; i++){
        printf("array[%d] : %d\n", i, f_array[i]);
    }
}

// Function to find the largest element in the array using a dedicated function
int findLargestElement(int f_array[], int f_size, int *f_index){
    int largestElement = f_array[0];
    *f_index = 0;
    int i;
    for(i=0; i < f_size; i++){
        if (f_array[i] > largestElement){
            largestElement = f_array[i];
            *f_index = i;
        }
    }
    return largestElement;
}

// Function to find the largest element in the array without using a dedicated function
int findLargestElementNoFunction(int f_array[], int f_size){
    int largestElement = f_array[0];
    int i;
    for(i=1; i < f_size; i++){
        if (f_array[i] > largestElement){
            largestElement = f_array[i];
        }
    }
    return largestElement;
}

// Function to find the largest element in the array using recursion
int findLargestElementRecursive(int f_array[], int f_size){
    int largest;
    if (f_size == 1){
        return f_array[0];
    }
    largest = findLargestElementRecursive(f_array, f_size - 1);
    if (f_array[f_size - 1] > largest){
        return f_array[f_size - 1];
    } else {
        return largest;
    }
}

// The output of the above program is shown as below:
/* . 
Enter data for an array of the length 5
Enter data for the position 0 : 66
Enter data for the position 1 : 09
Enter data for the position 2 : -4
Enter data for the position 3 : 32
Enter data for the position 4 : 21
Entered array elements:
array[0] : 66
array[1] : 9
array[2] : -4
array[3] : 32
array[4] : 21
The largest element in the array using a dedicated function is: 66
The largest element in the array without using a dedicated function is: 66
The largest element in the array using recursion is: 66
*/