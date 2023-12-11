#include <stdio.h>

#define MAX_STUDENTS 50 // Maximum number of students

int main() {
    int examScores[MAX_STUDENTS] = {85, 78, 92, 90, 79}; // Example exam scores
    
    // Accessing and printing exam scores
    printf("Exam Scores:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Student %d Score: %d\n", i + 1, examScores[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/* . 
Exam Scores:
Student 1 Score: 85
Student 2 Score: 78
Student 3 Score: 92
Student 4 Score: 90
Student 5 Score: 79
*/