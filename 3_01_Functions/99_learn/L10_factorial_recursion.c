#include <stdio.h>

int computeFactorial_Recursion(int fnumber);

int main() {
    int number, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = computeFactorial_Recursion(number);
        printf("Factorial of %d is: %d\n", number, result);
    }
    return 0;

}

int computeFactorial_Recursion(int fnumber){
        int fresult;
        if (fnumber == 1){
            return 1;
        }
        else {
            fresult = fnumber * computeFactorial_Recursion(fnumber-1);
            printf("%d\n ", fresult);
              
        }
        return fresult;
}