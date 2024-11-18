#include <stdio.h>
int main(){
    int number_of_rows = 7, row,col;

    for(row=1; row<=number_of_rows; row++){
        for(col=row; col<number_of_rows; col++){
            printf("X");
        }
//        printf("The value of i is: %d\n", i);
        for(col=1; col<=2*row-1;col++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}