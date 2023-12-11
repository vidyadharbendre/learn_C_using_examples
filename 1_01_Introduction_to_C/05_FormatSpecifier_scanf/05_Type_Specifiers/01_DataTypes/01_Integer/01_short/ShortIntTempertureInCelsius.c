/* Program Name: ShortIntTempertureInCelsius.c
   Author: Vidyadhar Bendre
   Email: vidyadhar.bendre@gmail.com
   Description: In this example, we declare a short int variable named temperature, which represents the current temperature in degrees Celsius. We use the %hd format specifier in the printf statement to display the temperature as a short integer. Additionally, this program demonstrates the usage of scanf to accept temperature and questionMark values from the user, and it displays the accepted values.

*/

#include <stdio.h>

int main() {
    // Declare short integer variables for temperature and questionMark.
    short int temperature;
    short questionMark;

    // Prompt the user to enter the temperature and questionMark values
    printf("Enter the current temperature in degrees Celsius..: ");
    scanf("%hd", &temperature);

    printf("Enter a value for questionMark....................: ");
    scanf("%hd", &questionMark);

    // Display the accepted values with appropriate messages
    printf("The current temperature in degrees Celsius........: %hd\n", temperature);
    printf("Printing question mark with defined specifier.....: %hd\n", questionMark);
    printf("Printing questionMark using type specifier........: %c\n", questionMark);

    // Return 0 to indicate successful program execution.
    return 0;
}

// The output of the above program as shown below

/*   

Enter the current temperature in degrees Celsius..: -5
Enter a value for questionMark....................: -42
The current temperature in degrees Celsius........: -5
Printing question mark with defined specifier.....: -42
Printing questionMark using type specifier........: ?

*/


