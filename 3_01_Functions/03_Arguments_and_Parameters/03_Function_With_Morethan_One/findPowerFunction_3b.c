#include <stdio.h>

// function declaration
void findPower(int fbase, int fexponent);

int main(){
    long result = 1; 
    int base=2, exponent=3, i;

    // 2*2*2 = 8 - base - 2, exponent is 3 - multiply 3 times

    // function call
    findPower(base, exponent);
    findPower(10, 3);
    findPower(10, 1);

    return 0;

}

// function definition
void findPower(int fbase, int fexponent){
    // build a logic
    int fi;
    long fresult=1;

    for(fi=1; fi <= fexponent; fi++){
        fresult *= fbase;
    }

    printf("The Power of the number is %ld for the given base %d and exponent %d\n", fresult, fbase, fexponent);

}
