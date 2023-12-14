#include <stdio.h>
#define MAX_LEN_ARR 7
int main(){
    // declare an array
    // datatype identifier[size]
    float arrStudents[MAX_LEN_ARR];
    int index;
    float smallest;
    
    printf(" Enter elements \n");

    for(index=0; index < MAX_LEN_ARR; index++){
        scanf("%f", &arrStudents[index]);
    }
    
    for(index=0; index < MAX_LEN_ARR; index++){
        printf("arrStudents[%d] =  %f\n", index, arrStudents[index]);
    }

    smallest = arrStudents[0];
    for(index=0; index < MAX_LEN_ARR; index++){

        if(arrStudents[index] < smallest){
            smallest = arrStudents[index];
        }
    }
    printf("%f\n", smallest);


    return 0;
}
