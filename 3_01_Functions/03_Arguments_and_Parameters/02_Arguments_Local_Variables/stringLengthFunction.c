#include <stdio.h>

// functin declaration
int stringLength(char fstringName[]);


int main(){

    char stringName[] = "My Name";

    int lengthOfString;

    lengthOfString = stringLength(stringName);    
    printf("The length of the given string \"%s\" is : %d\n", stringName, lengthOfString);


    return 0;
}


// function definition
int stringLength(char fstringName[]){

    int flengthOfString=0;

    while (fstringName[flengthOfString] != '\0'){
        flengthOfString++;

    }
    return flengthOfString;
}