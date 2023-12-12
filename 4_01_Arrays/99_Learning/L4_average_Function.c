#include <stdio.h>

#define MAX_STUDENT 5

int calculateTotalMarks(int fstudentMarks[], int findex);

int main() {
    int studentPOPCmarks[MAX_STUDENT] = {50, 63, 33, 0, 69};

    int totalMarks = calculateTotalMarks(studentPOPCmarks, MAX_STUDENT - 1);
    float averageMarks = (float)totalMarks / MAX_STUDENT;

    for (int i = 0; i < MAX_STUDENT; i++) {
        printf("studentPOPCmarks[%d] = %d\n", i, studentPOPCmarks[i]);
    }

    printf("\nTotal Marks (using iteration): %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}

int calculateTotalMarks(int fstudentMarks[], int findex) {
    int ftotal = 0, fi;
    for (fi = 0; fi <= findex; fi++) {
        ftotal += fstudentMarks[fi];
    }
    return ftotal;
}