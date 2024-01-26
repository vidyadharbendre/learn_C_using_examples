#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *ptrtoFILE;
    char str[80];

    ptrtoFILE = fopen("abc.txt", "r");

    if (ptrtoFILE == NULL){
        printf("Error in opening!");
        exit(1);
    }
    else{

        fgets(str, 80, ptrtoFILE);
        printf("string read from the file: %s\n", str);
        fclose(ptrtoFILE);
    }

    return 0;
}

// The output of the above program is shown as below
/*
string read from the file: Bendre Atharva
*/