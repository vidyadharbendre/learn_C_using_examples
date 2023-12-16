/* . 
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
    int largestElement, i, index_position;

    printf("Enter data for an array of the length %d\n", MAX_SIZE_OF_AN_ARRAY);

    for(i = 0; i < MAX_SIZE_OF_AN_ARRAY; i++){
        printf("Enter data for the position %d : ", i);
        scanf("%d", &array[i]);
    }

    for(i = 0; i < MAX_SIZE_OF_AN_ARRAY; i++){
        printf("array[%d] : %d\n", i, array[i]);
    }

    largestElement = array[0]; 
    index_position = 0;

    for(i = 0; i < MAX_SIZE_OF_AN_ARRAY; i++){
        if (array[i] > largestElement){
            largestElement = array[i];
            index_position = i;
        }
    }
    printf("The largest element in the array is : %d \n", largestElement);

    return 0;
}

// The output of the above program is shown as below:
/* . 
Enter data for an array of the length 5
Enter data for the position 0 : 89
Enter data for the position 1 : 3
Enter data for the position 2 : 02
Enter data for the position 3 : -5
Enter data for the position 4 : 99
array[0] : 89
array[1] : 3
array[2] : 2
array[3] : -5
array[4] : 99
The largest element in the array is : 99 
*/