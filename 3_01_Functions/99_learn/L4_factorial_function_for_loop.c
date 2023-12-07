#include <stdio.h>

int computeFactorial(int fnumber);

int main(){
    int number, result, i;
    printf("Enter the number\n");
    scanf("%d", &number);

    result = computeFactorial(number);
    printf("result : %d\n", result);

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

/* 
Enter the number
4
1 - 1
2 - 2
3 - 6
4 - 24
result : 24
*/