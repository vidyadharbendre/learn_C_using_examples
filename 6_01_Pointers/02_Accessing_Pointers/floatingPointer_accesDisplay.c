#include <stdio.h>

int main(){

    float number;
    float *ptr_to_float;
    ptr_to_float = &number;

    printf("Enter a floating point number : ");
    scanf("%f", &number);


    printf("The entered floating number is : %f\n", *ptr_to_float);



    return 0;
}

// The output of the above program is shown as below
/*

Enter a floating point number : 34.56
The entered floating number is : 34.560001

*/