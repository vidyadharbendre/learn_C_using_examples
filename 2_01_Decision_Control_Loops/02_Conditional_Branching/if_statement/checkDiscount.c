/*
    Name of the Program: Senior Discount Eligibility
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program checks if the user's age qualifies them for a 
    senior discount. A senior discount is available for users aged 60 and above.

    Version History:
        Version 1.0 - [Date: 2024-28-10] - Added a note about PythonTutor.com 
        to write and visualize C programs on mobile.
    
    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check for senior discount eligibility
    if (age >= 60) {
        printf("You are eligible for the senior discount.\n");
    } else {
        printf("You are not eligible for the senior discount.\n");
    }

    return 0;
}

// Compilation command: gcc checkDiscount.c -o checkDiscount
// Execution command: ./checkDiscount

/* Example Outputs:

Case 1:
Enter your age: 60
You are eligible for the senior discount.

Case 2:
Enter your age: 55
You are not eligible for the senior discount.

*/
