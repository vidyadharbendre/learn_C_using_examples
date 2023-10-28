# Compiling and Executing C Programs

## Windows (Using MinGW)

1. **Install MinGW:**
   - Download the MinGW installer from [MinGW.org](https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/).
   - Run the installer and select the necessary components, including GCC for C/C++.

2. **Compile and Execute:**
   - Open Command Prompt.
   - Navigate to the directory containing your C source file.
   - Compile your program using GCC:
     ```bash
     gcc your_program.c -o your_program
     ```
   - Execute your program:
     ```bash
     your_program.exe
     ```

## macOS

1. **Using Clang (Default Compiler):**
   - Open Terminal.
   - Navigate to the directory containing your C source file.
   - Compile your program using Clang:
     ```bash
     clang your_program.c -o your_program
     ```
   - Execute your program:
     ```bash
     ./your_program
     ```

2. **Using GCC:**
   - If not already installed, you can install GCC through Homebrew:
     ```bash
     brew install gcc
     ```

   - Follow the same compilation and execution steps as for Windows using GCC.

## Linux

1. **Using GCC (Default Compiler):**
   - Most Linux distributions include GCC by default.

2. **Compile and Execute:**
   - Open Terminal.
   - Navigate to the directory containing your C source file.
   - Compile your program using GCC:
     ```bash
     gcc your_program.c -o your_program
     ```
   - Execute your program:
     ```bash
     ./your_program
     ```

Choose the relevant section based on your platform and preferred compiler. Make sure to replace `your_program.c` with your C source file's name and `your_program` with the desired executable name.