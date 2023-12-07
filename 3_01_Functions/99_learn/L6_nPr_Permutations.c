#include <stdio.h>

int computeFactorial(int fnumber);
int calculatePermutations(int n, int r);

int main() {
    int n, r, permutations;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (n < r || n < 0 || r < 0) {
        printf("Invalid input. n should be greater than or equal to r, and both should be non-negative.\n");
    } else {
        permutations = calculatePermutations(n, r);
        printf("Permutations (nPr): %d\n", permutations);
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

// The output of the above program is:
/*  
Enter the value of n: 3
Enter the value of r: 2
Permutations (nPr): 6
*/

int calculatePermutations(int n, int r) {
    int nFactorial = computeFactorial(n);
    int nMinusRFactorial = computeFactorial(n - r);

    return nFactorial / nMinusRFactorial;
}
