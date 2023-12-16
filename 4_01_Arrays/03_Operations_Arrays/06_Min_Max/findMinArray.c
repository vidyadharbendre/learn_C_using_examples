/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
16 December 2023
*/
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

// The output of the above program is shown as below:
/* . 
Enter data for an array of the lenth 5
Enter data for the position 0 : 97
Enter data for the position 1 : 05
Enter data for the position 2 : -8
Enter data for the position 3 : 0
Enter data for the position 4 : 32
array[0] : 97
array[1] : 5
array[2] : -8
array[3] : 0
array[4] : 32
The smallest element in the array is : -8 
*/