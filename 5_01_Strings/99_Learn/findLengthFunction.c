#include <stdio.h>

int findStringLength(char fgivenString[]);

int main() {
    char givenString[] = "Welcome to C";
    int lengthOfString=0;

    lengthOfString = findStringLength(givenString);
    printf("The length of the given string %s is : %d\n", givenString, lengthOfString);

    return 0;
}

int findStringLength(char fgivenString[]) {
    int flengthOfString = 0;
    while (fgivenString[flengthOfString] != '\0') {
        flengthOfString++;
    }
    return flengthOfString;
}
