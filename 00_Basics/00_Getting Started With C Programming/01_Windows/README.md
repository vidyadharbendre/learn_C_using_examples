# Getting Started with C Programming on Windows

This guide will help you set up a C programming environment on a Windows-based system using MinGW (Minimalist GNU for Windows). MinGW is a popular choice for developing C/C++ programs on Windows. We'll cover installation, compilation, and running C programs.

## Table of Contents
1. [Installing MinGW](#installing-mingw)
2. [Compiling and Running C Programs](#compiling-and-running-c-programs)
3. [Text Editors and Integrated Development Environments (IDEs)](#text-editors-and-ides)
4. [Useful Windows Command Prompt Commands](#useful-windows-command-prompt-commands)

## Installing MinGW
MinGW provides a development environment for Windows that includes the GNU Compiler Collection (GCC). Follow these steps to install MinGW:

1. Visit the MinGW download page: [MinGW - Minimalist GNU for Windows](http://www.mingw.org/).

2. Download the "mingw-get-setup.exe" installer.

3. Run the installer and select the necessary packages for C/C++ development. At a minimum, you will need to install "mingw32-base" and "mingw32-gcc-g++."

4. Complete the installation by following the on-screen instructions.

## Compiling and Running C Programs
- Open the Windows Command Prompt by pressing `Win + R`, typing `cmd`, and hitting Enter.

- Navigate to the directory containing your C source code using the `cd` command.

- To compile a C program, use the following command:
gcc -o output_program.exe source_file.c


- To run the compiled program, simply type the program's name and hit Enter:
output_program


## Text Editors and Integrated Development Environments (IDEs)
Choose a text editor or an integrated development environment (IDE) for writing C code on Windows. Some popular options include:

- [Visual Studio Code](https://code.visualstudio.com/)
- [Code::Blocks](http://www.codeblocks.org/)
- [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/)
- [CLion](https://www.jetbrains.com/clion/)

## Useful Windows Command Prompt Commands
- `cd`: Change the current directory.
- `dir`: List files and directories in the current directory.
- `copy`: Copy files and directories.
- `move`: Move or rename files and directories.
- `del` or `erase`: Delete files.
- `mkdir`: Create a new directory.

With MinGW and a text editor/IDE of your choice, you can start coding and compiling C programs on your Windows system. Whether you're a beginner or an experienced programmer, these tools and techniques will help you get started.