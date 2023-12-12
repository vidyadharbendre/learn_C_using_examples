#include <stdio.h>
#define MAX_STUDENT 5
int main(){

    int studentPOPCmarks[MAX_STUDENT]={50, 63, 33, 0, 69}, i;


    for(i=0; i < MAX_STUDENT; i++){
        printf("studentPOPCmarks[%d] = %d\n", i, studentPOPCmarks[i]);
    }
    
    return 0;
}