/*
    Program Name: FloatingPointTemperature.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    In this example, a C program showcases the use of float variables with varying precision and format specifiers. Three float variables are declared: temperatureFloatWithF, explicitly defined as a float using the 'f' suffix, temperatureFloatWithoutF, a float by default, and priceFloat, which demonstrates more decimal places for precision. The printf statements display these variables with both default and specified precisions, with examples of 2 and 7 decimal places. Additionally, this program uses scanf to accept user input for these float variables, displaying the accepted values with specified precision. This program serves as an illustrative guide on how to format and present floating-point numbers in C, providing insight into precision control, format specifiers, and user input handling for float data types.
*/

#include <stdio.h>

int main() {
    // Declare float variables for temperature and price
    float temperatureFloatWithF;
    float temperatureFloatWithoutF;
    float priceFloat;
    double priceDouble;
//    double priceDoubleFloat

    printf("\n\n");
    // Prompt the user to enter temperature and price values
    printf("Enter a temperature with 'f' suffix...........................: ");
    scanf("%f", &temperatureFloatWithF);
    
    // Consume the newline character left in the input buffer
    getchar();

    printf("Enter a temperature without 'f' suffix........................: ");
    scanf("%f", &temperatureFloatWithoutF);
    
    // Consume the newline character left in the input buffer
    getchar();

    printf("Enter a price with 7 decimal places precision.................: ");
    scanf("%f", &priceFloat);
    
    // Consume the newline character left in the input buffer
    getchar();
    
    printf("Enter a same with 7 decimal same as above.....................: ");
    scanf("%lf", &priceDouble);

    printf("\n\n");
    // Display the accepted values of float variables with specified precisions
    printf("Float variable with 'f' suffix (default precision)............: %f\n", temperatureFloatWithF);
    printf("Float variable with 'f' suffix (2 decimal places precision)...: %.2f\n", temperatureFloatWithF);

    printf("Float variable without 'f' suffix (default precision).........: %f\n", temperatureFloatWithoutF);
    printf("Float variable without 'f' suffix (2 decimal places precision): %.2f\n", temperatureFloatWithoutF);

    printf("Another float variable with 7 decimal places precision........: %.7f\n", priceFloat);

    printf("Another float variable with 7 decimal places precision........: %.7f\n", priceDouble);

    // Return 0 to indicate successful program execution
    return 0;
}

/* .  

When the program is not waiting to get input for the second variable when you run it. This issue may occur due to input buffer problems, especially when you have newline characters left in the buffer. You can modify your program to handle this by consuming the newline character left in the input buffer after the first scanf. You can achieve this using an extra getchar() function call to consume the newline character.

*/

// The output of the program as shown below:
/* .   
Enter a temperature with 'f' suffix...........................: 25.5f
Enter a temperature without 'f' suffix........................: 25.5
Enter a price with 7 decimal places precision.................: 12.3456789f
Enter a same with 7 decimal same as above.....................: 12.3456789f


Float variable with 'f' suffix (default precision)............: 25.500000
Float variable with 'f' suffix (2 decimal places precision)...: 25.50
Float variable without 'f' suffix (default precision).........: 25.500000
Float variable without 'f' suffix (2 decimal places precision): 25.50
Another float variable with 7 decimal places precision........: 12.3456793
Another float variable with 7 decimal places precision........: 12.3456789

*/


