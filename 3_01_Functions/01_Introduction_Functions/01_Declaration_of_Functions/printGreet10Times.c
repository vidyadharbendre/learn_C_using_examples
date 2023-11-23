

/* 

    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    19 November, 2023

    Purpose:
    This program aims to illustrate the fundamental differences between functions and loops in the context of C programming. By showcasing a simple example utilizing both concepts, it aims to highlight the distinct functionalities and applications of functions versus loops.

    Description:
    The program exhibits two fundamental programming structures: functions and loops. It begins with a function declaration void greet();, signaling the existence of a function named greet() without defining its behavior at that point. 
    
    In the main() function, there is a for loop that iterates ten times, each iteration calling the greet() function. This loop demonstrates repetitive execution without defining the underlying operation within the loop itself. 
    
    The greet() function is later defined to print a welcoming message, showcasing the encapsulation of a specific task within a function that can be repeatedly called from different parts of the program. 
    
    Through this example, it distinguishes between the repetitive nature of loops and the modular nature of functions in C programming.

*/


#include <stdio.h>

// Function declaration
void greet(); // Declaring a function named greet which will be defined later

int main() {
    int i;

    for(i=0; i<10; i++){
        // Function call
        greet(); // Calling the greet function 10 times using a for loop
    }

    return 0;
}

// Function definition
void greet() {
    printf("Hello, Welcome to C Programming Functions!\n");
}

// The output of the above program is shown as below:
/*

Hello, Welcome to C Programming Functions!
Hello, Welcome to C Programming Functions!
Hello, Welcome to C Programming Functions!
Hello, Welcome to C Programming Functions!
Hello, Welcome to C Programming Functions!
Hello, Welcome to C Programming Functions!
Hello, Welcome to C Programming Functions!
Hello, Welcome to C Programming Functions!
Hello, Welcome to C Programming Functions!
Hello, Welcome to C Programming Functions!

*/