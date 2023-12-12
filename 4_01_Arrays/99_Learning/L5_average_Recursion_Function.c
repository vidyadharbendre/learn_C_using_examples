/* .  
/*
Description:
The program calculates the total marks of students using a recursive function and then computes the average marks.

Purpose:
- To demonstrate the use of recursion to calculate the total marks of students.
- To display the total and average marks based on the student marks provided.

Recursive Function:
- Function: calculateTotalMarks
- Arguments: fstudentMarks[] (array of student marks), findex (current index)
- Base Case: When findex < 0, returns 0 to stop recursion.
- Recursive Case: Returns the sum of the current marks and the result of the function call with the next index.

Explanation:
The calculateTotalMarks function recursively computes the total marks by adding the current student's marks to the result of the function call with the previous index. It stops when it reaches the base case (findex < 0) to prevent infinite recursion.

*/

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

    printf("\nTotal Marks (using recursion): %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}

int calculateTotalMarks(int fstudentMarks[], int findex) {
    if (findex < 0) {
        return 0; // Base case: when index goes below 0, return 0 to stop recursion
    } else {
        return fstudentMarks[findex] + calculateTotalMarks(fstudentMarks, findex - 1);
    }
}
