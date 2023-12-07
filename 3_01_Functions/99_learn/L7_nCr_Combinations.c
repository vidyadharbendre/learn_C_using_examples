#include <stdio.h>

int computeFactorial(int fnumber);
int calculateCombinations(int n, int r);

int main() {
    int n, r, combinations;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (n < r || n < 0 || r < 0) {
        printf("Invalid input. n should be greater than or equal to r, and both should be non-negative.\n");
    } else {
        combinations = calculateCombinations(n, r);
        printf("Combinations (nCr): %d\n", combinations);
    }

    return 0;
}

int computeFactorial(int fnumber) {
    int fi, fresult = 1;
    for (fi = 1; fi <= fnumber; fi++) {
        fresult *= fi;
    }
    return fresult;
}

int calculateCombinations(int n, int r) {
    int nFactorial = computeFactorial(n);
    int rFactorial = computeFactorial(r);
    int nMinusRFactorial = computeFactorial(n - r);

    return nFactorial / (rFactorial * nMinusRFactorial);
}

// The output of the above program is:
/*  
Enter the value of n: 3
Enter the value of r: 2
Combinations (nCr): 3
*/