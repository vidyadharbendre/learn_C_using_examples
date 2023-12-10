/* . 

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
30 November, 2023


Purpose:
This is to check if the given number is odd or even

*/


#include <stdio.h>

// function declaration
void checkEvenOdd(int fvariable);

int main(){

    //declaration
    int variable=21;

// function call

    checkEvenOdd(variable);
    checkEvenOdd(22); 
    checkEvenOdd(0);
    checkEvenOdd(10000); 

    return 0;
}

// function definition
void checkEvenOdd(int fvariable){

    if(fvariable % 2 == 0){
        printf("The given number %d is even number\n", fvariable);
    }
    else{
        printf("The given number %d is odd number\n", fvariable);
    }

}


// The output of the above program is

/*  

The given number 21 is odd number
The given number 22 is even number
The given number 0 is even number
The given number 10000 is even number

*/