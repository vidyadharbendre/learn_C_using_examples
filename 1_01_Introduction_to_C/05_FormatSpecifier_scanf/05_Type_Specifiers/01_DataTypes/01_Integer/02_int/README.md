# C Program: Input and Display Amount in Rupees

This is a simple C program that demonstrates the use of an `int` variable to represent the total amount of money in rupees. It uses `scanf` to accept the total amount of money from the user and `printf` to display the entered value with the rupee symbol (₹).

## Program Details

- The program declares an `int` variable named `totalMoney`.
- It uses `printf` to display a message prompting the user to enter the total amount of money in the bank in rupees.
- The program utilizes `scanf` to read the value entered by the user and store it in the `totalMoney` variable.
- `printf` is used again to display the entered value along with the rupee symbol (₹) in the output.
- The `%d` format specifier in the `printf` statement is used to print the `totalMoney` variable as an integer, matching its data type. As a result, the output will display the total amount of money in the bank as an integer, with the rupee symbol (₹) included.

## Running the Program

1. Ensure you have a C compiler installed on your system (e.g., GCC).
2. Save the program to a file with a `.c` extension (e.g., `IntTotalMoney.c`).
3. Compile the program using the following command:

   ```bash
   gcc IntTotalMoney.c -o IntTotalMoney

4. Run the compiled program
   ```bash
   ./IntTotalMoney

You will be prompted to enter the total amount of money in the bank. After entering the value, the program will display "The total amount of money in the bank is ₹<entered_value>" in your terminal, with the amount represented in rupees (₹).