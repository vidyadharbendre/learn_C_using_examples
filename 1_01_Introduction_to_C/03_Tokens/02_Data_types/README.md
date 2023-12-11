# Understanding Data Types in C

In C programming, data types are an essential concept that defines the type and size of data that a variable can hold. Data types are used to specify how the data should be stored and manipulated within a program. C provides several built-in data types, each with a specific set of values and operations.

## Importance of Data Types

Data types are crucial because they:

- Ensure proper memory allocation: Different data types occupy varying amounts of memory, so choosing the right data type helps in efficient memory usage.

- Determine the range of values: Data types define the range of values a variable can store. This is essential for preserving data integrity and preventing overflow or underflow errors.

- Allow for code readability: Using appropriate data types makes your code more understandable and maintainable.

## Common Data Types in C

C programming offers various data types, including:

- **int**: Represents integers (whole numbers) and can be signed (positive or negative) or unsigned (positive values only).

- **char**: Stands for character data type and stores a single character, such as a letter or symbol.

- **float**: Represents single-precision floating-point numbers, suitable for storing decimal values.

- **double**: Represents double-precision floating-point numbers, offering greater precision for floating-point operations.

- **void**: Used to indicate that a function doesn't return any value or that a pointer doesn't have a specific data type.

- **_Bool**: Represents Boolean values (true or false).

- **Other custom data types**: You can create your custom data types using structures, unions, and typedefs to group variables of different data types into a single data structure.

## Example

```c
#include <stdio.h>

int main() {
    int age = 25; // Integer data type
    char grade = 'A'; // Character data type
    float price = 12.99; // Floating-point data type
    double pi = 3.14159265359; // Double data type
    _Bool isTrue = 1; // Boolean data type

    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Price: %.2f\n", price);
    printf("PI: %.10lf\n", pi);
    printf("Is True: %d\n", isTrue);

    return 0;
}
