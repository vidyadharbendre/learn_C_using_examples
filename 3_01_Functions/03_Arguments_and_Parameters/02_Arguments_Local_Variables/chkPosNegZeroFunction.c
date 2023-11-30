/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

*/

#include <stdio.h>

// function declaration

void checkPostiveNegativeZero(int fvariable);

int main(){

    int variable = 0;

    // function call
    checkPostiveNegativeZero(variable);
    checkPostiveNegativeZero(8);  
    checkPostiveNegativeZero(-8); 
    
    return 0;
}

void checkPostiveNegativeZero(int fvariable){

    if (fvariable > 0){
        printf("The given variable %d is Positive\n", fvariable);
    }
    else if (fvariable < 0){
        /* code */
        printf("The given variable %d is Negative\n", fvariable);
    }
    else {
        printf("The given variable %d is zero\n", fvariable);
    }
}

// The output of the above program is

/*

The given variable 0 is zero
The given variable 8 is Positive
The given variable -8 is Negative

*/