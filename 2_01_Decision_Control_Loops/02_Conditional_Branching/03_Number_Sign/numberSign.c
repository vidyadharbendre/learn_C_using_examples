#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Number is positive\n");
    } else if (num < 0) {
        printf("Number is negative\n");
    } else {
        printf("Number is zero\n");
    }

    return 0;
}

// The output of the above program is shown below:
/*  
Enter a number: 46 
Number is positive
*/