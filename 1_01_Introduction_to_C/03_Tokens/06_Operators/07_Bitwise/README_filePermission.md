# File Permissions Management with Bitwise Operators

Author: Vidyadhar Bendre
Date: 5th November, 2023

## Purpose

The purpose of this program is to demonstrate the use of bitwise operators, specifically the bitwise OR (|) and bitwise AND (&) operators, to manipulate file permissions. The program sets both write and execute permissions for a file by initializing a variable and using bitwise OR operations. It also checks and displays the granted permissions for the user.

## Description

This C program serves as an illustrative example of how to manage file permissions using bitwise operations. It defines three permission flags: Read, Write, and Execute, each represented by different bit positions. The program initializes a variable named permissions with no permissions (i.e., set to 0).

Using the bitwise OR operator (|), it grants write and execute permissions by setting the corresponding bits in the permissions variable. The program then checks if the user has specific permissions using the bitwise AND operator (&). If a specific permission is granted, it prints a corresponding message indicating that the user has that permission; otherwise, it prints a message indicating that the user does not have that permission.

## Program Output

When you run the program, you will see the following output:

User does not have read permission.
User has write permission.
User has execute permission.