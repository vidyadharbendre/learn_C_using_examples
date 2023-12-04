/*  
Author     : Vidyadhar Bendre
Date       : 4th December, 2023
Email      : vidyadhar.bendre@gmail.com

Purpose    : Illustrating Static Storage Class in C

Description:
This code demonstrates the use of the static storage class in C. The static int count variable inside the staticStorageExample() function retains its value between function calls.

Explanation:
In this program, the staticStorageExample() function increments the count variable each time it's called. As 'count' is declared as a static variable, it retains its value between function calls. Therefore, the count increments continuously with each function call, demonstrating how static variables persist their values across multiple calls to the function.

The output shows the increasing value of 'count' with each function call, illustrating the behavior of a static variable within a function in C.
*/

#include <stdio.h>

void staticStorageExample();

int main() {
    staticStorageExample(); // Output: Value of count inside function: 1
    staticStorageExample(); // Output: Value of count inside function: 2
    // 'count' is not accessible here as its scope is limited to the function it's declared in
    staticStorageExample();
    staticStorageExample();
    return 0;
}

void staticStorageExample() {
    static int count = 0; // 'count' will retain its value between function calls
    count++;
    printf("Value of count inside function: %d\n", count);
}

// The output of the above program is shown as below:

/* . 

Value of count inside function: 1
Value of count inside function: 2
Value of count inside function: 3
Value of count inside function: 4

*/
