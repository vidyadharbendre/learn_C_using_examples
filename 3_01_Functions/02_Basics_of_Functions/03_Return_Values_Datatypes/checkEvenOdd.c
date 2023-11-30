#include <stdio.h>

// Function declaration
int checkEvenOdd(int num);
void displayResult(int res, int num);


int main() {
    int number;
    int result;

    // Function call
    result = checkEvenOdd(3);
    displayResult(result, 3);

    // Function call
    result = checkEvenOdd(30);
    displayResult(result, 30);

    // Function call
    result = checkEvenOdd(15);
    displayResult(result, 15);

    return 0;
}

// Function definition
int checkEvenOdd(int num) {
    if (num % 2 == 0) {
        return 1; // Even
    } else {
        return 0; // Odd
    }
}

void displayResult(int res, int num){

        if (res == 1) {
            printf("%d is Even\n", num);
        } 
        else {
            printf("%d is Odd\n", num);
        }
}

// The outout of the above program is

/*

3 is Odd
30 is Even
15 is Odd

*/