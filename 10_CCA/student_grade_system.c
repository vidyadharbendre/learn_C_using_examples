#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int *grades;
};

int main() {
    int numStudents, numSubjects;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));
    for (int i = 0; i < numStudents; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        students[i].grades = (int *)malloc(numSubjects * sizeof(int));
        printf("Enter grades of student %d: ", i + 1);
        for (int j = 0; j < numSubjects; j++) {
            scanf("%d", &students[i].grades[j]);
        }
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Name: %s, Grades: ", students[i].name);
        for (int j = 0; j < numSubjects; j++) {
            printf("%d ", students[i].grades[j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < numStudents; i++) {
        free(students[i].grades);
    }
    free(students);

    return 0;
}
