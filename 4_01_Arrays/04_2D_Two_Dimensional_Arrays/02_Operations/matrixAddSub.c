#include <stdio.h>

void displayMatrix(int matrix[3][3]);
void  sum2DMatrix(int mat1[3][3], int mat2[3][3], int addition[3][3]);
void  sub2DMatrix(int mat1[3][3], int mat2[3][3], int subtraction[3][3]);

int main() {
    int matrixA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrixB[3][3] = {
        {8, 7, 6},
        {5, 4, 3},
        {2, 1, 0}
    };

    int resultAdd[3][3] = {0};
    int resultSub[3][3] = {0};

    printf("Matrix A:\n");
    displayMatrix(matrixA);

    printf("Matrix B:\n");
    displayMatrix(matrixB);

    sum2DMatrix(matrixA, matrixB, resultAdd);
    printf("\nSum Matrix:\n");
    displayMatrix(resultAdd);

    sub2DMatrix(matrixA, matrixB, resultSub);
    printf("\nSub Matrix:\n");
    displayMatrix(resultSub);

    return 0;
}

void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void  sum2DMatrix(int mat1[3][3], int mat2[3][3], int addition[3][3]){
    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
           addition[i][j] = mat1[i][j] + mat2[i][j];     
        }
    }
}    
void  sub2DMatrix(int mat1[3][3], int mat2[3][3], int subtraction[3][3]){
    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
           subtraction[i][j] = mat2[i][j] - mat1[i][j];     
        }
    }
}

//The output of the above program is shown as below:
/*
Matrix A:
1 2 3 
4 5 6 
7 8 9 
Matrix B:
8 7 6 
5 4 3 
2 1 0 

Sum Matrix:
9 9 9 
9 9 9 
9 9 9 

Sub Matrix:
7 5 3 
1 -1 -3 
-5 -7 -9 
*/