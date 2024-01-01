#include <stdio.h>

int findStringLength(char myString[]);
void displayCharArray(char myString[], int size);

int main() {
    char myString[100]; // Assuming maximum string length is 100 characters

    printf("Enter a string: ");
    scanf("%s", myString);

    int length = findStringLength(myString);
    displayCharArray(myString, length);

    return 0;
}


int findStringLength(char myString[]) {
    int length = 0;
    while (myString[length] != '\0') {
        length++;
    }
    return length;
}


void displayCharArray(char myString[], int size) {
    printf("Index   Address   Value\n");
    for (int i = 0; i < size; ++i) {
        printf("%d       %p   '%c'\n", i, &myString[i], myString[i]);
    }
}
// The output of the program is shown below:
/* . 
Enter a string: Vidyadhar
Index   Address   Value
0       0x16db8a674   'V'
1       0x16db8a675   'i'
2       0x16db8a676   'd'
3       0x16db8a677   'y'
4       0x16db8a678   'a'
5       0x16db8a679   'd'
6       0x16db8a67a   'h'
7       0x16db8a67b   'a'
8       0x16db8a67c   'r'
*/