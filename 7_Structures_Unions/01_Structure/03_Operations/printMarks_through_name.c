#include <stdio.h>
#include <string.h>

// Structure to represent a student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
    char grade;
};

void printMarksByName(struct Student students[], int numStudents, const char *searchName);

int main() {
    // Declare an array to store 2 student records
    struct Student students[2];

    // Assign initial data to two student records
    students[0].rollNumber = 1;
    strcpy(students[0].name, "Vidyadhar Bendre");
    students[0].marks = 85.5;
    students[0].grade = 'A';

    students[1].rollNumber = 2;
    strcpy(students[1].name, "Shashikant Bendre");
    students[1].marks = 76.8;
    students[1].grade = 'B';

    // Print initial data
    printf("Initial Student Data:\n");
    for (int i = 0; i < 2; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f, Grade: %c\n",
               students[i].rollNumber, students[i].name, students[i].marks, students[i].grade);
    }

    // Input student name to search for
    char searchName[50];
    printf("\nEnter the name of the student to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    strtok(searchName, "\n"); // Remove the newline character at the end

    // Print marks for the student by name
    printMarksByName(students, 2, searchName);

    return 0;
}

// Function to print the marks of a student by name
void printMarksByName(struct Student students[], int numStudents, const char *searchName) {
    int found = 0;

    // Search for the student by name
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            // Student found
            printf("Marks for %s: %.2f\n", students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
    }
}
