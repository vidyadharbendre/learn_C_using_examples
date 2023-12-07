#include <stdio.h>

int main() {
    int number, result = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        do {
            result *= i;
            i++;
        } while (i <= number);
        printf("Factorial of %d is: %d\n", number, result);
    }

    return 0;
}

/*  
Enter a number: 3
Factorial of 3 is: 6
*/