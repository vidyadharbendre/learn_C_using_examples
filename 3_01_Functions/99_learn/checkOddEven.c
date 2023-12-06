/*
Author:
Vidyadhar Bendre

Purpose:
This is to check if the given number is odd or even

*/
#include <stdio.h>

//declare function
void CheckLargest(int fnumber1, int fnumber2);

int main(){
    int number1, number2;

    printf("Enter a number1\n");
    scanf("%d", &number1);
    printf("Enter a number2\n");
    scanf("%d", &number2);

    printf("Entered first number is %d\n", number1);
    printf("Entered second number is %d\n", number2);

    CheckTwoNumbers(number1, number2);

        return 0;
}
// define function
void CheckLargest(int fnumber1, int fnumber2){

    if(fnumber1 > fnumber2){
        printf("The given number %d is the larges\n", fnumber1);
    }
    else{
        printf("The given numbers %d is the largest\n", fnumber2);
    }

}