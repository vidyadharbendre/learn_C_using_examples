#include <stdio.h>

#define MAX_LEN_ARRAY 5
int arrayIntegers[MAX_LEN_ARRAY];
int i;

void getElements();
void displayElements();

int main(){

    getElements();
    displayElements();
    return 0;
}

void getElements(){
    for(i = 0; i < MAX_LEN_ARRAY; i++){
        printf("Enter data for the arrayIntegers for its position %d : ", i);
        scanf("%d", &arrayIntegers[i]);
    }
}
void displayElements(){
    for(i = 0; i < MAX_LEN_ARRAY; i++){
        printf("arrayIntegers[%d] = %d\n", i, arrayIntegers[i]);
    }
}
