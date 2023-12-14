#include <stdio.h>

#define MAX_SIZE_OF_AN_ARRAY 5


int main(){
    int array[MAX_SIZE_OF_AN_ARRAY];
    int smallestElement, i, index_position;

    printf("Enter data for an array of the lenth %d\n", MAX_SIZE_OF_AN_ARRAY);

    for(i = 0; i < MAX_SIZE_OF_AN_ARRAY; i++){
        printf("Enter data for the position %d : ", i);

        scanf("%d", &array[i]);

    }

    for(i=0; i < MAX_SIZE_OF_AN_ARRAY; i++){
        printf("array[%d] : %d\n", i, array[i]);
    }

    smallestElement = array[0]; 
    index_position=0;

    for(i=0; i < MAX_SIZE_OF_AN_ARRAY; i++){
        if (array[i] < smallestElement){
            smallestElement = array[i];
            index_position = i;
        }
    }
    printf("The smallest element in the array is : %d \n", smallestElement);

    return 0;
}