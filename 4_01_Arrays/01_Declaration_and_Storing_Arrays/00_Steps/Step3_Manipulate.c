#include<stdio.h>

int main(){

    // Declaration of an array of integers with a size of 5
    int numbers[5], secondNumber, fourthNumber, i; 

    // Initializing the array with values
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Accessing the second element (index 1) which is 20
    secondNumber = numbers[1];
    // Accessing the fourth element (index 3) which is 40
    fourthNumber = numbers[3]; 

    printf("secondnumber is : %d\n", secondNumber);
    printf("secondnumber is : %d\n", fourthNumber);

    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]); // Printing all elements of the array
    }
    // Output: 10 20 30 40 50

    printf("\n Manipulate the Array Elements\n");
    numbers[2] = 66; // Changing the value of the third element (index 2) to 35
    numbers[4] += 50; // Adding 10 to the value of the fifth element (index 4)

    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]); // Printing all elements of the array
    }

    return 0;
}