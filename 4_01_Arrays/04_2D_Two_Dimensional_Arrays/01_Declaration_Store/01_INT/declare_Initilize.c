#include <stdio.h>

int main(){
    int i, j;
    int matrixA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrixB[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum[3][3]={0};

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matrixA[i][j]);

        }
        printf("\n");
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", sum[i][j]);

        }
        printf("\n");
    }

    return 0;
}