#include <stdio.h>

int main(){
    int number, result=1, i;
    printf("Enter the number\n");
    scanf("%d", &number);
    for(i=1; i<= number; i++){
        result = result*i;
        printf("%d - %d\n", i, result);
    }
    printf("result : %d\n", result);

    return 0;

}

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
result : 40320
*/