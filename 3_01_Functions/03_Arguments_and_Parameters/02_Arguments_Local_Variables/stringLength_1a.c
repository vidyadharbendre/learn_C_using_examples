#include <stdio.h>

int main(){

    char stringName[] = "My Name";

    int lengthOfString=0;

    while (stringName[lengthOfString] != '\0'){
        lengthOfString++;

    }

    printf("The length of the given string \"%s\" is : %d\n", stringName, lengthOfString);


    return 0;
}