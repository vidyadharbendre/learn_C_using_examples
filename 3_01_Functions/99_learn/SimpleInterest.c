/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Purpose:
This is to calculate the simple interest


*/

#include <stdio.h>

int main(){

    float simpleInterest, principleAmt=1000000, timeYears=3, rateOfInterest=10;

// function call
    simpleInterest = (principleAmt + timeYears + rateOfInterest)/100;
    printf("The calculated simple interest is : %.4f \n", simpleInterest);

    return 0;
}