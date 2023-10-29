# C Program: Display Amount in Rupees

This is a simple C program that demonstrates the use of an `int` variable to represent the total amount of money in rupees. It also includes a `printf` statement to display the amount with the rupee symbol (₹).

## Program Details

- The program declares an `int` variable named `totalMoney`.
- A value of 1,000,000 is assigned to the `totalMoney` variable, representing the total amount of money in rupees.
- The program uses the `printf` function to display a message along with the value of `totalMoney`. It utilizes the `\u` escape sequence followed by the Unicode code point (U+20B9) to represent the rupee symbol (₹) in the output.
- The `%d` format specifier in the `printf` statement is used to print the `totalMoney` variable as an integer, matching its data type. As a result, the output will display the total amount of money in the bank as an integer, with the rupee symbol (₹) included.

## Running the Program

1. Ensure you have a C compiler installed on your system (e.g., GCC).
2. Save the program to a file with a `.c` extension (e.g., `IntTotalMoney.c`).
3. Compile the program using the following command:

   ```bash
   gcc IntTotalMoney.c -o IntTotalMoney

1. Run the compiled program:

   ```bash    
    ./rupees_example

"The total amount of money in the bank is ₹1,000,000" displayed in your terminal, with the amount represented in rupees (₹).

