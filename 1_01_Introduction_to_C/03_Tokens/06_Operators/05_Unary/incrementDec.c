/*

Author  : Vidyadhar Bendre
Email   : vidyadhar.bendre@gmail.com
Data    : 9 November, 2023

*/

#include <stdio.h>

int main() {
    int n = 2, x=10, y=20, result;


    printf("%d ", n++);
    printf("%d ", n);
    printf("%d ", ++n);
    printf("%d\n", n);

    result = y++ + x++;
    printf("result = %d\n", result);

    result += ++y + ++x;
    printf("\n x = %d y = %d result = %d\n", x, y, result);



    return 0;
}

// The outout of the above program is as shown below
/* 

2 3 4 4
result = 30

 x = 12 y = 22 result = 64

*/