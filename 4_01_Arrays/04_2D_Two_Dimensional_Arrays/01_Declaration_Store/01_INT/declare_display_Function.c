#include <stdio.h>

void displayMatrix(int matrix[3][3]);
void  sum2DMatrix(int mat1[3][3], int mat2[3][3], int add[3][3]);

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

    int sum[3][3] = {0};

    printf("Matrix A:\n");
    displayMatrix(matrixA);

    printf("Matrix B:\n");
    displayMatrix(matrixA);

    sum2DMatrix(matrixA, matrixB, sum);
    printf("\nSum Matrix:\n");
    displayMatrix(sum);

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

void  sum2DMatrix(int mat1[3][3], int mat2[3][3], int add[3][3]){
    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
           add[i][j] = mat1[i][j] + mat2[i][j];     
        }
    }
}
