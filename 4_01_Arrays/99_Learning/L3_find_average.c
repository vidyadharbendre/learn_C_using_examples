#include <stdio.h>
#define MAX_STUDENT 5
int main(){

    int studentPOPCmarks[MAX_STUDENT]={50, 63, 33, 0, 69}, i;
    int totalMarks = 0;
    float averageMarks;


    for(i=0; i < MAX_STUDENT; i++){
        printf("studentPOPCmarks[%d] = %d\n", i, studentPOPCmarks[i]);
        totalMarks += studentPOPCmarks[i];
    }

    averageMarks = totalMarks/MAX_STUDENT;

    printf("\nTotal Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);


    return 0;
}