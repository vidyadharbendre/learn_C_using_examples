#include <stdio.h>

void fibonacciLoop(int fn); 

int main() {
    int count = 10; // Number of terms to generate
    fibonacciLoop(count);
    return 0;
}

void fibonacciLoop(int fn) {
    int ffirst = 0, fsecond = 1, next, fi;
    printf("Fibonacci Series using loop: ");
    for (int fi = 0; fi < fn; ++fi) {
        printf("%d, ", ffirst);
        next = ffirst + fsecond;
        ffirst = fsecond;
        fsecond = next;
    }
}

// The output of the above program is shown below:
/* . 
Fibonacci Series using loop: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, %  
*/