# Getting Started with C Programming on macOS

This guide provides an overview of how to start programming in the C language on a macOS-based system. You can use either the default `clang` compiler or install `gcc` (GNU Compiler Collection) for C/C++ development on your macOS.

## Table of Contents
1. [Using the Default Clang Compiler](#using-the-default-clang-compiler)
2. [Installing GCC on macOS](#installing-gcc-on-macos)
3. [Compiling and Running C Programs](#compiling-and-running-c-programs)
4. [Text Editors and Integrated Development Environments (IDEs)](#text-editors-and-ides)
5. [Useful Terminal Commands](#useful-terminal-commands)

## Using the Default Clang Compiler
macOS includes the `clang` compiler by default, which is suitable for C/C++ development. To compile a C program, open the Terminal and navigate to the directory containing your source code.

- Compile a C program: `clang -o <output_program> <source_file.c>`
- Run the compiled program: `./<output_program>`

## Installing GCC on macOS
You can install `gcc` on macOS using package managers like Homebrew or MacPorts.

### Using Homebrew
1. Install Homebrew if you haven't already:
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

2. Install GCC:
brew install gcc

3. You can now compile C programs using `gcc`.

## Compiling and Running C Programs
- To compile a C program with `gcc`: `gcc -o <output_program> <source_file.c>`
- To run the compiled program: `./<output_program>`

## Text Editors and Integrated Development Environments (IDEs)
Choose a text editor or an integrated development environment (IDE) for writing C code on macOS. Some popular options include:
- [Visual Studio Code](https://code.visualstudio.com/)
- [Xcode](https://developer.apple.com/xcode/)

## Useful Terminal Commands
- `pwd`: Print the current working directory.
- `ls`: List files and directories in the current directory.
- `cd`: Change the current directory.
- `man <command>`: Display manual pages for commands.
- `--help` or `-h` with a command for command-specific help.

You're now ready to start programming in C on your macOS system. Whether you choose `clang` or `gcc` as your compiler, you can explore various text editors or IDEs to streamline your C development experience.
