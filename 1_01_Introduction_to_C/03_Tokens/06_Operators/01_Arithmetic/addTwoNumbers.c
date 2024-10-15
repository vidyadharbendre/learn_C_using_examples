/*

    Version 1.0 - [Date: 2024-15-10] - Added a note about PythonTutor.com to write and visualize C programs on mobile.
  
    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com


*/

#include <stdio.h>
int main(){
    int num1 = 33;
    int num2 = 66;
    int sum;

    sum = num1 + num2;

    printf("The sum of the two numbers are %d\n", sum);

    printf("%2d + %2d = %2d\n", num1, num2, sum);

    return 0;
}