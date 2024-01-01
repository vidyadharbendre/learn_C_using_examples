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

void displayCharArray(char myString[], int size) {
    printf("Index   Address   Value\n");
    for (int i = 0; i < size; ++i) {
        printf("%d       %p   '%c'\n", i, &myString[i], myString[i]);
    }
}

int findStringLength(char myString[]) {
    int length = 0;
    while (myString[length] != '\0') {
        length++;
    }
    return length;
}

// The output of the above program is shown below:
/* . 
Index   Address   Value
0       0x16dd56674   'H'
1       0x16dd56675   'e'
2       0x16dd56676   'l'
3       0x16dd56677   'l'
4       0x16dd56678   'o'
*/