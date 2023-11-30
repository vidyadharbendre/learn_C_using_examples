/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Purpose:
This is to calculate the simple interest


*/

#include <stdio.h>

// function declaration
float simpleInterestCalculate(float fprincipleAmt, float ftimeYears, float frateOfInt);

int main(){

    float simpleInterest, principleAmt, timeYears, rateOfInterest;

    printf("Enter the principle Amount...: \n");
    scanf("%f", &principleAmt);

    printf("Enter the time in Years .....: \n");
    scanf("%f", &timeYears);

    printf("Enter rate of interest  .....: \n");
    scanf("%f", &rateOfInterest);


// function call
    simpleInterest = simpleInterestCalculate(principleAmt, timeYears, rateOfInterest);
    printf("The calculated simple interest is ...: %.4f \n", simpleInterest);

    return 0;
}

//function definition
float simpleInterestCalculate(float fprincipleAmt, float ftimeYears, float frateOfInt){

    float fsimpleInterest;

    fsimpleInterest = (fprincipleAmt * ftimeYears * frateOfInt)/100;

    return fsimpleInterest;

}


