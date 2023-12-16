#include <stdio.h>

#define MAX_SIZE_OF_AN_ARRAY 5

// Function to find the smallest element in the array using iteration
int findSmallestElement(int f_array[], int f_size);

// Function to find the index of the smallest element in the array using iteration
int findSmallestElementIndex(int f_array[], int f_size);

// Recursive function to find the index of the smallest element in the array
int findSmallestElementIndexRecursive(int f_array[], int f_size, int index);

// Recursive function to find the smallest element in the array
int findSmallestElementRecursive(int f_array[], int f_size);

int main(){
    int array[MAX_SIZE_OF_AN_ARRAY];
    int smallestElement, smallestElementIndex;

    printf("Enter data for an array of the length %d\n", MAX_SIZE_OF_AN_ARRAY);

    // Function call to input data
    for(int i = 0; i < MAX_SIZE_OF_AN_ARRAY; i++){
        printf("Enter data for the position %d : ", i);
        scanf("%d", &array[i]);
    }

    // Function call to find the smallest element using iteration
    smallestElement = findSmallestElement(array, MAX_SIZE_OF_AN_ARRAY);

    // Function call to find the index of the smallest element using iteration
    smallestElementIndex = findSmallestElementIndex(array, MAX_SIZE_OF_AN_ARRAY);

    // Display the smallest element and its index using iteration
    printf("The smallest element in the array using iteration is: %d\n", smallestElement);
    printf("Index of the smallest element in the array using iteration is: %d\n", smallestElementIndex);

    // Function call to find the index of the smallest element using recursion
    smallestElementIndex = findSmallestElementIndexRecursive(array, MAX_SIZE_OF_AN_ARRAY, 0);

    // Function call to find the smallest element using recursion
    smallestElement = findSmallestElementRecursive(array, MAX_SIZE_OF_AN_ARRAY);

    // Display the smallest element and its index using recursion
    printf("The smallest element in the array using recursion is: %d\n", smallestElement);
    printf("Index of the smallest element in the array using recursion is: %d\n", smallestElementIndex);

    return 0;
}

// Function definition to find the smallest element in the array using iteration
int findSmallestElement(int f_array[], int f_size){
    int smallestElement;
    smallestElement = f_array[0];

    for(int i = 1; i < f_size; i++){
        if (f_array[i] < smallestElement){
            smallestElement = f_array[i];
        }
    }
    return smallestElement;
}

// Function definition to find the index of the smallest element in the array using iteration
int findSmallestElementIndex(int f_array[], int f_size){
    int smallestElement = f_array[0], smallestElementIndex = 0, i; 

    for(i = 1; i < f_size; i++){
        if (f_array[i] < smallestElement){
            smallestElement = f_array[i];
            smallestElementIndex = i;
        }
    }
    return smallestElementIndex;
}

// Function definition to find the index of the smallest element in the array using recursion
int findSmallestElementIndexRecursive(int f_array[], int f_size, int index){
    if (f_size == 1){
        return index;
    }

    int result = findSmallestElementIndexRecursive(f_array + 1, f_size - 1, index + 1);

    return (f_array[index] < f_array[result]) ? index : result;
}

// Recursive function definition to find the smallest element in the array
int findSmallestElementRecursive(int f_array[], int f_size){
    if (f_size == 1){
        return f_array[0];
    }

    int smaller = findSmallestElementRecursive(f_array, f_size - 1);

    return (f_array[f_size - 1] < smaller) ? f_array[f_size - 1] : smaller;
}
