#include <stdio.h>
#include <string.h>

int findStringLength(char charArray[]);

int main(){
    char inputString[] = "Vidyadhar";
    
    printf("Length using UDF is ...............: %d\n", findStringLength(inputString));
    printf("Length using Library function is...: %lu\n", strlen(inputString));

    return 0;
}
int findStringLength(char fcharArray[]){
    int flength=0;
    while(fcharArray[flength] != '\0'){
        flength++;
    }
    return flength;
}