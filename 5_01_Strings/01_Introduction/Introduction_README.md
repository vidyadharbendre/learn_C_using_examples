# String Representation in Memory

This repository contains a simple C program demonstrating how strings are represented in memory in the C programming language.

## Purpose

The purpose of this program is to illustrate how strings are stored in memory as arrays of characters, emphasizing the sequential storage and the null terminator used to denote the end of a string.

## Explanation

In programming languages like C, strings are represented as arrays of characters. Each character in the string is stored sequentially in contiguous memory locations. The end of the string is marked by a special character, the null terminator (`'\0'`), which indicates the end of the string.

The program `string_representation.c` provided in this repository declares a string `"HELLO"` and prints each character of the string along with its corresponding memory address. Additionally, it shows the null terminator character and its memory address to demonstrate the end of the string.

## Running the Program

To run the program:

1. Ensure you have a C compiler installed (e.g., GCC).
2. Clone this repository or download the `string_representation.c` file.
3. Compile the C program using the command: `gcc -o string_representation string_representation.c`
4. Run the compiled program: `./string_representation`

The program output will display the memory addresses and characters of the string "HELLO", showcasing how strings are represented in memory.

## Program Output

The output of the program will resemble the following:

