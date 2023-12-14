#include <stdio.h>
//Declaration Part
long addTwoNumbers(int fvar1, int fvar2);

int main(){
// declaration
    int var1=11, var2=22; //input 
    long sum; //output

    //call function
    sum = addTwoNumbers(var1, var2); 

    printf("%d + %d = %ld\n", var1, var2, sum);

    //call function
    var1 = 33;
    var2 = 44;

    sum = addTwoNumbers(var1, var2); 
    printf("%d + %d = %ld\n", var1, var2, sum);

    //     //call function
    // sum = addTwoNumbers(99, 01); 

    // printf("%d + %d = %ld\n", var1, var2, sum);    



    return 0;
}

//Define

long addTwoNumbers(int fvar1, int fvar2){
    long fsum;
    fsum = fvar1 + fvar2;
    return fsum;

}