#include <stdio.h>
#include <string.h>

/* 
Purpose:
This program demonstrates how to manage student records using structures in C.
It defines a `Student` structure to hold information like roll number, name, marks, and grade of a student.
The program initializes an array of student records, prints the initial data, and allows the user to search for a student by name.
When a student is found, the program prints their marks.

Explanation:
1. We define a `Student` structure that holds four pieces of information:
   - `rollNumber`: The unique roll number of the student (integer).
   - `name`: The name of the student (character array of 50 characters).
   - `marks`: The student's marks (float).
   - `grade`: The student's grade (character).

2. The `students` array is used to store the records of two students. Each student's record is populated with initial values for roll number, name, marks, and grade.

3. The `printMarksByName` function allows the user to input a student's name and searches for the student in the array. If the student is found, their marks are printed. If not, a message indicating that the student is not found is displayed.
*/

// Structure to represent a student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
    char grade;
};

// Function prototype declaration (This tells the compiler about the function)
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

// The output of the above program is shown as below:
/*
Initial Student Data:
Roll Number: 1, Name: Vidyadhar Bendre, Marks: 85.50, Grade: A
Roll Number: 2, Name: Shashikant Bendre, Marks: 76.80, Grade: B

Enter the name of the student to search: Vidyadhar Bendre
Marks for Vidyadhar Bendre: 85.50
*/
