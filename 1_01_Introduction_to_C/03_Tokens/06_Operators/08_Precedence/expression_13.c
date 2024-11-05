/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates logical operators and comparison operators in C programming.
    It evaluates the complex logical expression a + 2 > b && !c || a != d && a - 2 <= e to illustrate their usage.

    Description:
    The program initializes integer variables 'a', 'b', 'c', 'd', and 'e' with values 11, 6, 0, 7, and 5 respectively. 
    It evaluates the complex logical expression a + 2 > b && !c || a != d && a - 2 <= e and stores the result in the variable 'result'.

    Explanation of Logical Expression:
    - Given values: a = 11, b = 6, c = 0, d = 7, e = 5.
    - a + 2 > b: Evaluates to true (11 + 2 > 6), which is true.
    - !c: Negation of c (0) results in true.
    - a != d: Compares 'a' and 'd' (11 != 7), which is true.
    - a - 2 <= e: Evaluates to true (11 - 2 <= 5), which is true.
    - Combining these conditions using logical operators (&& and ||): true && true || true && true
    - The expression resolves to true || true, which evaluates to true.
    - The value true is assigned to the variable 'result'.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com


*/

#include <stdio.h>

int main() {
    int a = 11;
    int b = 6;
    int c = 0;
    int d = 7;
    int e = 5;

    // Logical expression explanation incorporated in comments
    int result = a + 2 > b && !c || a != d && a - 2 <= e; // Logical expression evaluation

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is 

/*

result is : 1

# Initialize variables
a = 11
b = 6
c = 0
d = 7
e = 5

# Logical expression explanation incorporated in comments
result = a + 2 > b and not c or a != d and a - 2 <= e  # Logical expression evaluation

# Explanation of the Logical Expression:
# 1. Break down the expression based on operator precedence:
#    - 'and' has higher precedence than 'or', so we evaluate the 'and' parts first.

# 2. Evaluating 'a + 2 > b':
#    - a + 2 = 11 + 2 = 13
#    - Check if 13 > 6: This is True.

# 3. Evaluating '!c':
#    - c is 0, and 'not c' (or '!c' in C) converts 0 to True.
#    - So 'not c' is True.

# 4. Now evaluate the first part: 'True and True':
#    - This results in True.

# 5. Next part: 'a != d':
#    - Check if 11 != 7: This is True.

# 6. Evaluating 'a - 2 <= e':
#    - a - 2 = 11 - 2 = 9
#    - Check if 9 <= 5: This is False.

# 7. Now evaluate the second 'and': 'True and False':
#    - This results in False.

# 8. Combining with 'or':
#    - We have: 'True or False'
#    - Since 'or' returns True if at least one operand is True, the final result is True.

# Print the result of the logical expression
print("result is:", int(result))  # 'result is: 1' because True is equivalent to 1 in Python


*/