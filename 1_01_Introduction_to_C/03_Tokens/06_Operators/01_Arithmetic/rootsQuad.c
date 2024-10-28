/* 
    
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date: 5 November, 2023

    Purpose:
    This program calculates the roots of a quadratic equation of the form ax^2 + bx + c = 0, where the user provides coefficients a, b, and c. 
    It calculates the discriminant and determines the type of roots (real and distinct, real and equal, or complex) and computes the roots accordingly.

    Description:
    The program prompts the user to enter coefficients a, b, and c. It then calculates the discriminant using the formula discriminant = b^2 - 4ac.
    Depending on the value of the discriminant, the program computes the roots of the quadratic equation:
    - If the discriminant is greater than 0, it calculates two real and distinct roots.
    - If the discriminant is equal to 0, it calculates one real root, and both roots are the same.
    - If the discriminant is less than 0, it calculates complex roots with real and imaginary parts.
    The program displays the roots based on the type of roots it calculates.

    Version History
    Version 1.0 - [Date: 2024-28-10] - Added a note about PythonTutor.com to write and visualize C programs on mobile.
  
    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %lf\n", root1);
        printf("Root 2 = %lf\n", root2);
    } else if (discriminant == 0) {
        // One real root (both roots are the same)
        root1 = -b / (2 * a);
        printf("Root 1 = Root 2 = %lf\n", root1);
    } else {
        // Complex roots (no real solutions)
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %lf - %lfi\n", realPart, imaginaryPart);
    }

    return 0;
}

/*

Enter coefficients a, b, and c: 1 2 3
Root 1 = -1.000000 + 1.414214i
Root 2 = -1.000000 - 1.414214i

Enter coefficients a, b, and c: 1 5 2
Root 1 = -0.438447
Root 2 = -4.561553

*/