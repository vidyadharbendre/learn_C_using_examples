/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates logical operators and comparison operators in C programming.
    It evaluates the logical expression 10!=10 || 5<4 && 8 to illustrate their usage.

    Description:
    The program evaluates the logical expression 10!=10 || 5<4 && 8 and stores the result in the variable 'result'.

    Explanation of Logical Expression:
    - 10 != 10: Compares if 10 is not equal to 10 (false).
    - 5 < 4: Checks if 5 is less than 4 (false).
    - 8: Constant value (true).
    - Combining these conditions using logical operators (|| and &&): false || false && true
    - The expression resolves to false || false, which evaluates to false.
    - The value false is assigned to the variable 'result'.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com


*/

#include <stdio.h>

int main() {
    // Logical expression explanation incorporated in comments
    int result = 10 != 10 || 5 < 4 && 8; // Logical expression evaluation    

    printf("result is : %d\n", result);

    return 0;
}


/*

# Initialize the logical expression components
result = 10 != 10 or 5 < 4 and 8  # Logical expression evaluation

# Explanation of the Logical Expression:
# 1. Operator Precedence:
#    - 'and' has higher precedence than 'or', so '5 < 4 and 8' is evaluated first.

# 2. Evaluating '10 != 10':
#    - This checks if '10' is not equal to '10'.
#    - Since '10 == 10', this condition is 'False' (equivalent to 0 in Python).

# 3. Evaluating '5 < 4 and 8':
#    - '5 < 4' checks if '5' is less than '4'.
#    - This is 'False' (0).
#    - Since 'False and 8' involves a 'False' operand on the left side, it short-circuits to 'False' (0),
#      because 'and' requires both sides to be 'True' to return 'True'.

# 4. Combining with 'or':
#    - We now have: 'False or False'.
#    - 'or' returns 'True' if at least one operand is 'True', but here both are 'False'.
#    - Therefore, the final result is 'False' (0 in output).

# Print the result of the logical expression
print("result is:", int(result))  # 'result is: 0'

*/