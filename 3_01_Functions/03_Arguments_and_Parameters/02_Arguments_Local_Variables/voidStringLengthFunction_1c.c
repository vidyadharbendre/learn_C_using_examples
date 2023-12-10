#include <stdio.h>
#include <string.h>

// functin declaration
void stringLength(char fstringName[]);


int main(){

    char stringName[20] = "Welcome", stringName1[] = "My Name is Vidyadhar";

    stringLength(stringName);   
    stringLength("Vidyadhar Bendre");
    stringLength(stringName1);

    strcpy(stringName, "Good Bye");
    stringLength(stringName);


    return 0;
}


// function definition
void stringLength(char fstringName[]){

    int flengthOfString=0;

    while (fstringName[flengthOfString] != '\0'){
        flengthOfString++;

    }
    printf("The length of the given string \"%s\" is : %d\n", fstringName, flengthOfString);
}

// The output of the above program is shown as below

/* . 

The length of the given string "Welcome" is : 7
The length of the given string "Vidyadhar Bendre" is : 16
The length of the given string "My Name is Vidyadhar" is : 20
The length of the given string "Good Bye" is : 8

*/
