/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates logical operations and conditional statements in C.
    It evaluates the expression (a > b && b <= c) || !(a % c == 0) to showcase how logical operators and conditions work in C.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 15, 4, and 3 respectively. 
    It evaluates the logical expression ((a > b && b <= c) || !(a % c == 0)) and stores the result in the variable 'result'.

    Explanation of Logical Expression:
    - (a > b && b <= c): Two conditions are checked:
      - a > b: Checks if 'a' (value 15) is greater than 'b' (value 4). (True)
      - b <= c: Checks if 'b' (value 4) is less than or equal to 'c' (value 3). (False)
      - The result of this part is False because the second condition is not met.
    
    - !(a % c == 0): This part computes:
      - a % c: Computes the remainder of 'a' (value 15) divided by 'c' (value 3). (0)
      - a % c == 0: Checks if the remainder is equal to 0. (True)
      - !(a % c == 0): Negates the result of a % c == 0. (False)
      - The result of this part is False due to the negation.

    - The entire expression (a > b && b <= c) || !(a % c == 0) evaluates to True || False, resulting in True.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int a = 15;
    int b = 4;
    int c = 3;

    // Logical expression explanation incorporated in comments
    int result = (a > b && b <= c) || !(a % c == 0); // Logical expression ((a > b && b <= c) || !(a % c == 0))

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is 

/*

result is : 0

Explanation of Logical Expression:
- Initial values: a = 15, b = 4, c = 3

- Logical expression: (a > b && b <= c) || !(a % c == 0)

Step-by-Step Evaluation:
1. `(a > b)`: Check if `a` (15) is greater than `b` (4). This is `true`.
2. `(b <= c)`: Check if `b` (4) is less than or equal to `c` (3). This is `false`.
3. `(a > b && b <= c)`: Combine the results of steps 1 and 2 using `&&` (AND operator). Since one condition is `false`, the entire expression is `false`.

4. `(a % c == 0)`: Check if the remainder of `a` divided by `c` (15 % 3) is equal to 0. Since 15 is divisible by 3, this is `true`.
5. `!(a % c == 0)`: Apply `!` (NOT operator) to the result of step 4. The result is `false` because `!(true)` is `false`.

6. Final expression: `(a > b && b <= c) || !(a % c == 0)`: Combine the results of steps 3 and 5 using `||` (OR operator). Since both parts are `false`, the entire expression is `false`.

7. Result: `0` (as `false` is represented by 0 in C).

*/