/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 16 December 2023  
Version 2 - 15 December 2024  

Purpose:
Read and display a sequence of numbers entered by the user using functions.

Description:
- The program prompts the user to input the number of elements.
- It then uses two separate functions:
   1. `readNumbers` to read the numbers into an array.
   2. `displayNumbers` to display the numbers entered.
- The program demonstrates the use of arrays and function calls to modularize the code.

Explanation:
1. **Functions Used**:
   - `readNumbers`: Accepts an array and its size to input the numbers.
   - `displayNumbers`: Accepts an array and its size to display the numbers.

2. **Variable Length Array (VLA)**:  
   - Declaring `int numbersArray[n];` requires C99 or later.  
   - The size `n` is input by the user before the array is declared.

3. **Code Structure**:
   - Input for the array size happens in `main()`.
   - Functions are used for reading and displaying numbers to keep the code clean and modular.

Note:
For compilers not supporting VLAs, use dynamic memory allocation (e.g., `malloc()`).
*/

#include <stdio.h>

// Function Prototypes
void readNumbers(int fnumbersArray[], int fn);
void displayNumbers(int fnumbersArray[], int fn);

int main() {
    int n = 0;

    // Prompt user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbersArray[n]; // Declare array after obtaining the value of n (VLA)

    // Function calls
    readNumbers(numbersArray, n);
    displayNumbers(numbersArray, n);

    return 0;
}

// Function to read numbers into an array
void readNumbers(int fnumbersArray[], int fn) {
    int fi;

    printf("Enter %d numbers:\n", fn);
    for (fi = 0; fi < fn; ++fi) {
        scanf("%d", &fnumbersArray[fi]);
    }
}

// Function to display numbers from an array
void displayNumbers(int fnumbersArray[], int fn) {
    int fi;

    printf("The numbers entered are: ");
    for (fi = 0; fi < fn; ++fi) {
        printf("%d ", fnumbersArray[fi]);
    }
    printf("\n");
}

// The output of the above program is:
/*
Enter the number of elements: 5
Enter 5 numbers:
5
8
2
1 
0
The numbers entered are: 5 8 2 1 0 
*/

/*
Note:
- `int numbersArray[n];` is a Variable Length Array (VLA) supported in C99 and later.
- If the compiler does not support VLAs, dynamic memory allocation (e.g., `malloc()` and `free()`) can be used.
*/
