#include <stdio.h>
#define MAX_STUDENT 5
int main(){

    int studentPOPCmarks[MAX_STUDENT], i;
    //{50, 63, 33, 0, 69};

    printf("Enter %d marks for each :\n", MAX_STUDENT);

    for (i = 0; i < MAX_STUDENT; i++) {
        printf("Enter POPCmarks for the roll number %d: ", i + 1);
        scanf("%d", &studentPOPCmarks[i]); // Taking input for each element
    }
    printf("\nThe entered POPC marks for %d students\n\n", MAX_STUDENT);
    for(i=0; i < MAX_STUDENT; i++){
        printf("studentPOPCmarks[%d] = %d\n", i, studentPOPCmarks[i]);
    }
    
    return 0;
}

// The output of the above program is shown below:
/*
5 marks for each :
Enter POPCmarks for the roll number 1: 33
Enter POPCmarks for the roll number 2: 44
Enter POPCmarks for the roll number 3: 66
Enter POPCmarks for the roll number 4: 77
Enter POPCmarks for the roll number 5: 88

The entered POPC marks for 5 students

studentPOPCmarks[0] = 33
studentPOPCmarks[1] = 44
studentPOPCmarks[2] = 66
studentPOPCmarks[3] = 77
studentPOPCmarks[4] = 88
*/
