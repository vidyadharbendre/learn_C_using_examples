#include <stdio.h>

// function declaration
int addition(int fnum1, int fnum2);

int main(){
    int resultAdd, resultSub, num1, num2;

    printf("Enter the first number: \n");
    scanf("%d", &num1);

    printf("Enter the second number: \n");
    scanf("%d", &num2);

// function call
    resultAdd = addition(num1, num2);
    printf("The sum of %2d + %2d = %2d\n", num1, num2, resultAdd);

    return 0;
}

// function defintion
int addition(int fnum1, int fnum2){
    int fresult;

    fresult = fnum1 + fnum2;

    return fresult;

}