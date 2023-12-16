#include <stdio.h>

#define MAX_STUDENT 5

int calculateTotalMarks(int fstudentMarks[], int findex);

int main() {
    int studentPOPCmarks[MAX_STUDENT] = {50, 63, 33, 0, 69}, totalMarks;
    float averageMarks;

    totalMarks = calculateTotalMarks(studentPOPCmarks, MAX_STUDENT - 1);
    averageMarks = (float)totalMarks / MAX_STUDENT;

    for (int i = 0; i < MAX_STUDENT; i++) {
        printf("studentPOPCmarks[%d] = %d\n", i, studentPOPCmarks[i]);
    }

    printf("\nTotal Marks (using recursion): %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}

int calculateTotalMarks(int fstudentMarks[], int findex) {
    int frecursiveSum;
    if (findex < 0) {
        printf("Base case reached.\n"); // Base case: when index goes below 0, return 0 to stop recursion
        return 0;
    } else {
        printf("Calculating for index %d with value %d.\n", findex, fstudentMarks[findex]);
        frecursiveSum = fstudentMarks[findex] + calculateTotalMarks(fstudentMarks, findex - 1);
        printf("Returning sum for index %d: %d.\n", findex, frecursiveSum);
        return frecursiveSum;
    }
}

// The output of the above program is shown below:
/* . 
Calculating for index 4 with value 69.
Calculating for index 3 with value 0.
Calculating for index 2 with value 33.
Calculating for index 1 with value 63.
Calculating for index 0 with value 50.
Base case reached.
Returning sum for index 0: 50.
Returning sum for index 1: 113.
Returning sum for index 2: 146.
Returning sum for index 3: 146.
Returning sum for index 4: 215.
studentPOPCmarks[0] = 50
studentPOPCmarks[1] = 63
studentPOPCmarks[2] = 33
studentPOPCmarks[3] = 0
studentPOPCmarks[4] = 69

Total Marks (using recursion): 215
Average Marks: 43.00
*/