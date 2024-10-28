/*
    Name of the Program: Division and Modulus Operations
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program demonstrates the use of division (/) and modulus (%) 
    operators in C to calculate the quotient and remainder of two integers. It takes 
    two integers, divides the first by the second, and displays both the quotient 
    and remainder.
    
    Version History:
        Version 1.0 - [Date: 2024-10-28] - Added a note about PythonTutor.com to write 
        and visualize C programs on mobile.
    
    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int a, b;
    
    // Prompt user for input
    printf("Enter the dividend (numerator)....: ");
    scanf("%d", &a);
    
    printf("Enter the divisor (denominator)...: ");
    scanf("%d", &b);
    
    // Calculate quotient and remainder using / and % operators
    int quotient = a / b;   // Quotient from dividing a by b
    int remainder = a % b;  // Remainder from dividing a by b
    
    // Display results
    printf("Quotient....: %d\n", quotient);
    printf("Remainder...: %d\n", remainder);
    
    return 0;
}

// Compilation command: gcc expression_0.c -o expression_0
// Execution command: ./expression_0

/* Example Outputs:

Case 1:
Enter the dividend (numerator)....: 10
Enter the divisor (denominator)...: 3
Quotient....: 3
Remainder...: 1

Case 2:
Enter the dividend (numerator)....: 25
Enter the divisor (denominator)...: 4
Quotient....: 6
Remainder...: 1

Case 3:
Enter the dividend (numerator)....: 14
Enter the divisor (denominator)...: 5
Quotient....: 2
Remainder...: 4

Case 4:
Enter the dividend (numerator)....: 53
Enter the divisor (denominator)...: 13
Quotient....: 4
Remainder...: 1

*/
