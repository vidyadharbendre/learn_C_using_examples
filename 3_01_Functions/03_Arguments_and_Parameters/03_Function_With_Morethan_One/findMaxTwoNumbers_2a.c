/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Purpose:
WAF to find the max of the given two numbers

*/

#include <stdio.h>


int main(){
    int result, var1=10, var2=50;

    // unary operator
    // (expression ? var1:var2)
    result = (var1 > var2) ? var1 : var2;
    printf("The maximum number is %d of the given two numbers %d and %d\n", result, var1, var2);

    return 0;
}

