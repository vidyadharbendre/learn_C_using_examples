#include <stdio.h>

// function declaration
int addition(int fnum1, int fnum2);

int main(){
    int result, num1=10, num2=20;

// function call
    result = addition(num1, num2);
    printf("The sum of %2d + %2d = %2d\n", num1, num2, result);
}

// function defintion
int addition(int fnum1, int fnum2){
    int fresult;

    fresult = fnum1 + fnum2;

    return fresult;

}