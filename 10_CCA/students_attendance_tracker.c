#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numCourses, numStudents;

    printf("Enter the number of courses: ");
    scanf("%d", &numCourses);

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    char **attendance = (char **)malloc(numCourses * sizeof(char *));
    for (int i = 0; i < numCourses; i++) {
        attendance[i] = (char *)malloc(numStudents * sizeof(char));
        printf("Enter attendance for course %d: ", i + 1);
        scanf("%s", attendance[i]);
    }

    // Display attendance
    printf("\nAttendance:\n");
    for (int i = 0; i < numCourses; i++) {
        printf("Course %d: %s\n", i + 1, attendance[i]);
    }

    // Free allocated memory
    for (int i = 0; i < numCourses; i++) {
        free(attendance[i]);
    }
    free(attendance);

    return 0;
}
