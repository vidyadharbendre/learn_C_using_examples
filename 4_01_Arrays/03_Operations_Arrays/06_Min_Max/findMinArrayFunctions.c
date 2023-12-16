/* 
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
16 December 2023

Purpose: 
Program to demonstrate different methods to find the smallest element in an array.

Description:
This program showcases various techniques to find the smallest element within a predefined array.
It utilizes functions to perform specific tasks such as inputting data, displaying the array, and finding the smallest element using different approaches like a dedicated function, iteration without a dedicated function, and a recursive function.

Explanation:
- The program starts by declaring necessary functions for inputting data, displaying the array, and finding the smallest element in various ways.
- In the main function, it initializes an array and prompts the user to input values into the array.
- It then displays the entered array elements.
- Three different methods are used to find the smallest element:
    1. Using a dedicated function (`findSmallestElement`): Iterates through the array to find the smallest element.
    2. Without a dedicated function (`findSmallestElementNoFunction`): Iterates through the array directly in the main function.
    3. Using a recursive approach (`findSmallestElementRecursive`): Finds the smallest element using recursion.
- Each method is called in the main function, and the smallest element found by each approach is displayed.

Functions:
- inputData(): Takes input data and populates the array.
- displayArray(): Displays the contents of the array.
- findSmallestElement(): Finds the smallest element using a dedicated function.
- findSmallestElementNoFunction(): Finds the smallest element without a dedicated function.
- findSmallestElementRecursive(): Finds the smallest element using recursion.
*/

#include <stdio.h>

#define MAX_SIZE_OF_AN_ARRAY 5

// Function declarations
void inputData(int f_array[], int f_size);
void displayArray(int f_array[], int f_size);
int findSmallestElement(int f_array[], int f_size, int *f_index);
int findSmallestElementNoFunction(int f_array[], int f_size);
int findSmallestElementRecursive(int f_array[], int f_size);

int main(){
    int array[MAX_SIZE_OF_AN_ARRAY];
    int smallestElement, index_position;

    printf("Enter data for an array of the length %d\n", MAX_SIZE_OF_AN_ARRAY);

    // Function call to input data
    inputData(array, MAX_SIZE_OF_AN_ARRAY);

    // Function call to display the array
    printf("Entered array elements:\n");
    displayArray(array, MAX_SIZE_OF_AN_ARRAY);

    // Function call to find the smallest element using dedicated function
    smallestElement = findSmallestElement(array, MAX_SIZE_OF_AN_ARRAY, &index_position);
    printf("The smallest element in the array using a dedicated function is: %d\n", smallestElement);

    // Function call to find the smallest element without using a dedicated function
    smallestElement = findSmallestElementNoFunction(array, MAX_SIZE_OF_AN_ARRAY);
    printf("The smallest element in the array without using a dedicated function is: %d\n", smallestElement);

    // Function call to find the smallest element using recursion
    smallestElement = findSmallestElementRecursive(array, MAX_SIZE_OF_AN_ARRAY);
    printf("The smallest element in the array using recursion is: %d\n", smallestElement);

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

// Function to find the smallest element in the array using a dedicated function
int findSmallestElement(int f_array[], int f_size, int *f_index){
    int smallestElement = f_array[0];
    *f_index = 0;
    int i;
    for(i=0; i < f_size; i++){
        if (f_array[i] < smallestElement){
            smallestElement = f_array[i];
            *f_index = i;
        }
    }
    return smallestElement;
}

// Function to find the smallest element in the array without using a dedicated function
int findSmallestElementNoFunction(int f_array[], int f_size){
    int smallestElement = f_array[0];
    int i;
    for(i=1; i < f_size; i++){
        if (f_array[i] < smallestElement){
            smallestElement = f_array[i];
        }
    }
    return smallestElement;
}

// Function to find the smallest element in the array using recursion
int findSmallestElementRecursive(int f_array[], int f_size){
    if (f_size == 1){
        return f_array[0];
    }
    int smaller = findSmallestElementRecursive(f_array, f_size - 1);
    if (f_array[f_size - 1] < smaller){
        return f_array[f_size - 1];
    } else {
        return smaller;
    }
}
