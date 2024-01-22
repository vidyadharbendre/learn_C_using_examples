#include <stdio.h>

int main(){

    float inputFloat;
    int outputInt;

    float *ptrtofloat;
    int *ptrtoint;

    ptrtofloat = &inputFloat;
    ptrtoint = &outputInt;

    printf("Enter a floating point number : \n");
    scanf("%f", &inputFloat);

    *ptrtoint = (int) *ptrtofloat;

    printf("Integer value of the entered float is : %d\n", *ptrtoint);

    return 0;
}

// The output of the above program is shown as below:
/*
3.14
Integer value of the entered float is : 3
*/