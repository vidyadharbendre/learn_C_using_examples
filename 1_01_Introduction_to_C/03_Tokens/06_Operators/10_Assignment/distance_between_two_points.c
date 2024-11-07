/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 7, 2024

    Purpose:
    This program calculates the distance between two points (x1, y1) and (x2, y2) in a 2D plane.

    Description:
    The program takes the coordinates of two points as input from the user and uses the distance formula:
    
    Distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    
    The calculated distance is then displayed to the user. To compute the square root, the program uses the `sqrt` function from the math library.

    Version History:
        Version 1.0 - [Date: 07-NOV-2024] - Initial version demonstrating distance calculation between two points.

    Note:
    Ensure the math library is linked during compilation by using `-lm`:
    gcc program_name.c -o output_name -lm

    You can visualize this program's execution using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>
#include <math.h>  // Required for sqrt function

int main() {
    float x1, y1, x2, y2, distance;

    // Input coordinates for the first point
    printf("Enter x1 and y1 (coordinates of the first point)....: ");
    scanf("%f %f", &x1, &y1);

    // Input coordinates for the second point
    printf("Enter x2 and y2 (coordinates of the second point)...: ");
    scanf("%f %f", &x2, &y2);

    // Calculating the distance using the distance formula
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Displaying the calculated distance
    printf("Distance between the two points.....................: %.2f\n", distance);

    return 0;
}

// The output of the above program is shown as below
/* 
*/
