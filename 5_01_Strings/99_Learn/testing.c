#include <stdio.h>

int findLengthOfTheString(char fchArray[]);
void displayString(char fchar[], int findex);
int checkIsDigit(char fch);

int main() {
    char chArray[] = {'W', 'e', 'l', 'c', 'o', 'm', 'e', '\0'};
    int index = 0;
    char ch;

    printf("%s\n", chArray);

    index = findLengthOfTheString(chArray);
    printf("The length of the string is : %d\n", index);

    displayString(chArray, index);

//    printf("The entered character is : %c\n", ch);
    printf("enter a character : ");
    scanf(" %c", &ch);
    printf("The entered character is : %c\n", ch);

    if(checkIsDigit(ch)){
        printf("Entered character is digit");
    }else{
        printf("Entered character is not a digit");
    }

    return 0;
}

int checkIsDigit(char fch){
    if (fch >= '0' && fch <= '9'){
        return 1;
    }
    else return 0;
}

void displayString(char fchar[], int findex) {
    int fi;
    for (fi=0; fi < findex; fi++) {
        printf("%c\n", fchar[fi]);
    }
}

int findLengthOfTheString(char fchArray[]) {
    int findex = 0;
    while (fchArray[findex] != '\0') {
        findex++;
    }
    return findex;
}
