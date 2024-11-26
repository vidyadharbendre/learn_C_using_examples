#include <stdio.h>

int computeFactorial(int fnumber);

int main(){
    int number, result, i;
    printf("Enter the number\n");
    scanf("%d", &number);

    result = computeFactorial(number);
    printf("The factorial of the given number %d is  : %d\n", number, result);

    return 0;
}

int computeFactorial(int fnumber){
        int fi, fresult=1;
        for(fi=1; fi<= fnumber; fi++){
            fresult = fresult*fi;
            printf("%d - %d\n", fi, fresult);
        }
        return fresult;
}

// The output of the above program is shown as below:
/* 
Enter the number
8
1 - 1
2 - 2
3 - 6
4 - 24
5 - 120
6 - 720
7 - 5040
8 - 40320
The factorial of the given number 8 is  : 40320
*/