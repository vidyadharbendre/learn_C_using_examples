/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Purpose:
This is to write a basic C program to build a logic and later convert it into a C function

*/

#include <stdio.h>

int main(){

    int variable = 0;

    if (variable > 0){
        printf("The given variable %d is Positive\n", variable);
    }
    else if (variable < 0){
        /* code */
        printf("The given variable %d is Negative\n", variable);
    }
    else {
        printf("The given variable %d is zero\n", variable);
    }
    
    return 0;
}

