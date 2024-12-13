/* 
Purpose: 
This program splits an input array into two separate arrays: one containing even numbers and the other containing odd numbers.
It demonstrates array manipulation and basic user input/output in C.

Description:
- The user is prompted to enter the size of the array (less than 50).
- The program validates the size of the array. If the size is invalid (<= 0 or > 50), the program will terminate with an error message.
- The user is then asked to input the elements of the array.
- The program splits the input array into two arrays:
  1. An "even" array containing only even numbers.
  2. An "odd" array containing only odd numbers.
- The program displays the original array, the even array, and the odd array.

Step-by-Step Implementation:
1. Prompt the user to enter the size of the array.
2. Validate the entered size to ensure it is within the valid range (1 to 50).
3. Ask the user to enter the array elements one by one.
4. Split the array into even and odd elements.
5. Display the original array, the even array, and the odd array.
6. Exit the program after displaying the results.

*/

#include <stdio.h>

// Function to display the elements of an array
void displayArray(int finputArray[], int flen);

int main() {
    int len, i, j = 0, k = 0;
    int inputArray[50], evenArray[50], oddArray[50];

    // Input: Size of the array
    printf("Enter the size or length of an array (less than 50): ");
    scanf("%d", &len);

    // Validate array size
    if (len <= 0 || len > 50) {
        printf("Invalid array size. Please enter a size between 1 and 50.\n");
        return 1;
    }

    printf("The size of the array is: %d\n", len);

    // Input: Elements of the array
    printf("Enter %d elements of the array one by one:\n", len);
    for (i = 0; i < len; i++) {
        scanf("%d", &inputArray[i]);
    }

    // Display the original array
    printf("Original Array:\n");
    displayArray(inputArray, len);

    // Processing: Split the array into even and odd arrays
    for (i = 0; i < len; i++) {
        if (inputArray[i] % 2 == 0) {
            evenArray[j] = inputArray[i];
            j++;
        } else {
            oddArray[k] = inputArray[i];
            k++;
        }
    }

    // Output: Display even and odd arrays
    printf("Even Array:\n");
    displayArray(evenArray, j);
    printf("Odd Array:\n");
    displayArray(oddArray, k);

    return 0;
}

// Function to display the elements of an array
void displayArray(int finputArray[], int flen) {
    for (int fi = 0; fi < flen; fi++) {
        printf("%d ", finputArray[fi]);
    }
    printf("\n");
}


// The output of the above program is shown as below:
/*
case -1: key in with space:

Enter the size or length of an array (less than 50): 5
The size of the array is: 5
Enter 5 elements of the array one by one:
1 2 3 4 5
Original Array:
1 2 3 4 5 
Even Array:
2 4 
Odd Array:
1 3 5 
*/

/*
case 2 - key in with newline:
./pgm_11_split_odd_even 

Enter the size or length of an array (less than 50): 5
The size of the array is: 5
Enter 5 elements of the array one by one:
1
2
3
4
5
Original Array:
1 2 3 4 5 
Even Array:
2 4 
Odd Array:
1 3 5 
*/