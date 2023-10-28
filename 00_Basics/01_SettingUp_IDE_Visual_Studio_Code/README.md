# Setting Up Visual Studio Code for C Programming

This guide will help you install Visual Studio Code (VS Code) and configure it for practicing C programming on Windows, macOS, or Linux.

## Prerequisites

Before you begin, make sure you have the following installed:

- Visual Studio Code: [Download here](https://code.visualstudio.com/)
- C/C++ compiler:
  - On Windows: MinGW or GCC-based toolchains
  - On macOS: clang (default compiler)
  - On Linux: GCC (GNU Compiler Collection)

## Installation

1. **Download VS Code**: Visit the [VS Code website](https://code.visualstudio.com/) and download the installer for your operating system.

2. **Install VS Code**:
   - **Windows**: Run the installer and follow the installation wizard.
   - **macOS**: Drag the downloaded app to the Applications folder.
   - **Linux**: Follow your distribution-specific installation instructions.

## Configuration

3. **Open VS Code**: Launch VS Code after installation.

4. **Install Extensions**:

   - Click on the Extensions icon in the Activity Bar (or press `Ctrl+Shift+X`).
   - Install the following extensions:
     - "C/C++" by Microsoft (C/C++ language support)
     - "Code Runner" by Jun Han (Optional, for executing code)
     - "C/C++ Snippets" by harsgak (Optional, for code snippets)

5. **Create a Workspace Folder**:

   - Create a folder where you'll save your C programs.
   - Open VS Code and click "File" > "Open Folder..." to select the folder.

6. **Create a C File**:

   - Create a new C source code file with a `.c` extension.
   - Right-click on the folder in the sidebar, choose "New File," and name it (e.g., `hello.c`).

7. **Write Your C Code**:

   - Open the `.c` file and write your C code.

8. **Build and Run**:

   - Press `Ctrl+Shift+B` to build your program. Configure necessary tools like GCC if prompted.
   - Use "Code Runner" (if installed) with `Ctrl+Alt+N` to execute your program.

## Example

Check the sample `hello.c` file for a basic "Hello, World!" program in C.
