/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Purpose:
WAF to find the max of the given two numbers

*/

#include <stdio.h>

// function declaration
void findMax(int fvar1, int fvar2);

int main(){
    int var1=10, var2=50;

// function call
    findMax(var1, var2);
    findMax(20, 0);
    findMax(0, 20);
    findMax(0, 0);

    return 0;
}

//function definition
void findMax(int fvar1, int fvar2){
    int fresult;
    
    if (fvar1 == fvar2){
        printf("The given two numbers %d and %d are equal\n", fvar1, fvar1);
    }
    else{
        // unary operator
        // (expression ? var1:var2)
        fresult = (fvar1 > fvar2) ? fvar1 : fvar2;
        printf("The maximum number is %d of the given two numbers %d and %d\n", fresult, fvar1, fvar2);
    }


}