# Limitations of Primary Data Types

Primary data types like `int`, `float`, and `char` are fundamental building blocks in programming languages. However, they come with certain limitations:

## Limited Storage for Multiple Values

These primary data types can only store a single value at a time. Storing multiple related values of the same type becomes cumbersome and inefficient when using separate variables for each value.

### Example - Storing Exam Scores:

Consider the challenge of storing exam scores for multiple students using individual variables:

```c
// Storing exam scores using individual variables
int score_student1 = 85;
int score_student2 = 78;
int score_student3 = 92;
// ... and so on
```
Using individual variables for each score becomes impractical as the number of students increases.

## Difficulty in Organizing and Accessing Multiple Values

When dealing with a collection of related values (such as multiple exam scores, temperatures throughout a day, or stock quantities), using individual variables for each value makes it difficult to organize, access, or manipulate them collectively.

### Example - Working with Temperatures

Managing temperatures throughout a day using separate variables for each reading:

```c
// Storing temperatures using individual variables
float temp_8am = 20.5;
float temp_10am = 22.8;
float temp_12pm = 25.0;
// ... and so on
```
This approach becomes unwieldy and challenging to process or manipulate the entire set of temperature readings.

# Solution: Arrays

Arrays offer a solution to these limitations by allowing the grouping of related data elements of the same type under a single name. They enable efficient storage, organization, and manipulation of multiple values, providing a more structured approach to handling collections of data.

## Example - Using Arrays for Exam Scores

Using arrays to store and process exam scores for multiple students:

```c
#include <stdio.h>

#define MAX_STUDENTS 50

int main() {
    int scores[MAX_STUDENTS] = {85, 78, 92}; // Initializing scores for 3 students
    
    // Accessing and processing scores
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        printf("Student %d Score: %d\n", i + 1, scores[i]);
    }

    return 0;
}
```
