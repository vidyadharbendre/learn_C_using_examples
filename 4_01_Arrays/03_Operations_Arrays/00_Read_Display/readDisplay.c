#include <stdio.h>

int main() {
    int n=0, i, numbersArray[n]; // Declare numbersArray after getting the value of n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &numbersArray[i]);
    }

    printf("The numbers entered are: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", numbersArray[i]);
    }
    printf("\n");

    return 0;
}

// The output of the above program is shown as below:
/*  
Enter the number of elements: 3
Enter 3 numbers:
2
1
-0
The numbers entered are: 2 1 0 
*/
