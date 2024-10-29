/*
    Name of the Program: Choice Selection
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program allows the user to select an option based on their input.
    It uses a switch statement to determine the selection:
        - Option 1: Selected when the user inputs 1
        - Option 2: Selected when the user inputs 2
        - Option 3: Selected when the user inputs 3
        - Any other input is treated as an invalid choice.

    Version History:
        Version 1.0 - [Date: 2024-10-29] - Initial version with PythonTutor.com note 
        for visualizing C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int choice;

    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    // Switch statement to determine the choice
    switch (choice) {
        case 1:
            printf("Selected: Option 1\n");
            break;
        case 2:
            printf("Selected: Option 2\n");
            break;
        case 3:
            printf("Selected: Option 3\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

// Compilation command: gcc menu_Selection.c -o menu_Selection
// Execution command: ./menu_Selection

/* Example Outputs:

Case 1:
Enter your choice (1, 2, or 3): 1
Selected: Option 1

Case 2:
Enter your choice (1, 2, or 3): 2
Selected: Option 2

Case 3:
Enter your choice (1, 2, or 3): 3
Selected: Option 3

Case 4:
Enter your choice (1, 2, or 3): 4
Invalid choice
*/
