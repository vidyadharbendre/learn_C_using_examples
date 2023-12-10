#include <stdio.h>


int main(){
    long result = 1; 
    int base=2, exponent=3, i;

    // 2*2*2 = 8 - base - 2, exponent is 3 - multiply 3 times

    for(i=1; i <= exponent; i++){
        result *= base;
    }

    printf("The Power of the number is %ld for the given base %d and exponent %d\n", result, base, exponent);

    return 0;

}