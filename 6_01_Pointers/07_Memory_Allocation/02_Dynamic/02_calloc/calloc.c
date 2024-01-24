#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Allocating memory for an array of integers and initializing to zero
    arr = (int *)calloc(size, sizeof(int));

    // Checking if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Displaying the values (initialized to zero)
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Freeing the allocated memory
    free(arr);

    return 0;
}
// The output of the above program is 
/*
0 0 0 0 0 %
*/

/*
Explanation:

calloc(size, sizeof(int)): Allocates an array of size integers and initializes all elements to zero. 
In this case, size is 5.

for (int i = 0; i < size; i++): Prints each element of the allocated array. 
Since the memory was initialized to zero by calloc, you see 0 0 0 0 0 as the output.

free(arr): Frees the allocated memory to avoid memory leaks.

The output 0 0 0 0 0 indicates that the calloc function successfully allocated memory, and the elements were correctly initialized to zero. If you're getting this output, it means the program is behaving as expected.
*/
