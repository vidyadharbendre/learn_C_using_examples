#include <stdio.h>


int main(){

    char greetingMessage[] = "Welcome to C programming";
    int lengthStr = 0;



    while (greetingMessage[lengthStr] != '\0'){
        /* code */
        lengthStr++;
    }
    
    printf("The total length of the given string is : %d\n", lengthStr);


    return 0;
}