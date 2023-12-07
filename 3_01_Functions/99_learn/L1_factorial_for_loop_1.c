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