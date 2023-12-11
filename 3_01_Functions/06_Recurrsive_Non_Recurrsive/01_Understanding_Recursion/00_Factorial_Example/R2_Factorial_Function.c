#include <stdio.h>

// Function prototype for getting user input
int getInput();
int calculateFactorial(int fnum);
int main() {
    int num, i;
    long factorial;

    // Call getInput function to retrieve user input
    num = getInput();

    // Display the entered number
    printf("The factorial of the entered number is %d\n", num);

    factorial = calculateFactorial(num);

    // Print the factorial
    printf("%ld\n", factorial);

    return 0;
}

// Function to get user input
int getInput() {
    int fnum;
    printf("Enter a number\n");
    scanf("%d", &fnum);
    return fnum; // Return the entered number
}

int calculateFactorial(int fnum){
    int fi;
    long fproduct=1;
    if (fnum == 1){
        return 1;
    }
    else{
        // Calculate factorial using a loop
        for (fi = 1; fi <= fnum; fi++) {
            fproduct = fproduct * fi;
        }
        return fproduct;
    }
}


// The output of the above program is:
/*
Enter a number
5
The factorial of the entered number is 5
120
*/

