#include <stdio.h>
#define MAX_STUDENT 63
int main(){

    int studentRollNumber[MAX_STUDENT], i;

    for(i=0; i < MAX_STUDENT; i++){
        studentRollNumber[i] = i+1;
    }

    for(i=0; i < MAX_STUDENT; i++){
        printf("studentRollNumber[%d] = %d\n", i, i+1);
    }
    
    return 0;
}