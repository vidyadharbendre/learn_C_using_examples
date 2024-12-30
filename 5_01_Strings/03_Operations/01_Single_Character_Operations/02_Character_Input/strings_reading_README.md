# String Input Methods in C

## **Author**
**Vidyadhar Bendre**

## **Email**
vidyadhar.bendre@gmail.com

## **Date**
Version 1 - 23 December 2024  

---

## **Purpose**
To demonstrate various methods for reading strings from the console in the C programming language.

---

## **Description**
This project showcases the following methods for reading strings from the console:

1. **`scanf`**: Reads input until the first whitespace or newline is encountered. Useful for reading single words.
2. **`getchar`**: Reads input character by character until a newline is encountered.
3. **`gets`**: Reads a full line of input but is unsafe due to potential buffer overflow.
4. **`fgets`**: Reads input safely, up to a specified length, including spaces.

Each method is demonstrated with specific examples, highlighting their advantages, limitations, and best practices for use.

---

## **Sample Code**
See the full implementation in the [main.c](main.c) file.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char strScanf[50], strGetchar[50], strGets[50], strFgets[50];

    // Using scanf
    printf("Enter a string (using scanf): ");
    scanf("%49s", strScanf);
    printf("String read using scanf: %s\n\n", strScanf);

    while (getchar() != '\n');

    // Using getchar
    printf("Enter a string character by character (using getchar): ");
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && i < 49) {
        strGetchar[i++] = ch;
    }
    strGetchar[i] = '\0';
    printf("String read using getchar: %s\n\n", strGetchar);

    while (getchar() != '\n');

    // Using gets
    printf("Enter a string (using gets): ");
    gets(strGets);
    printf("String read using gets: %s\n\n", strGets);

    // Using fgets
    printf("Enter a string (using fgets): ");
    fgets(strFgets, sizeof(strFgets), stdin);
    size_t len = strlen(strFgets);
    if (len > 0 && strFgets[len - 1] == '\n') {
        strFgets[len - 1] = '\0';
    }
    printf("String read using fgets: %s\n\n", strFgets);

    return 0;
}
```

---

## **Output Example**
```
Enter a string (using scanf): HelloWorld
String read using scanf: HelloWorld

Enter a string character by character (using getchar): Hello World
String read using getchar: Hello World

Enter a string (using gets): Hello C
String read using gets: Hello C

Enter a string (using fgets): Hello fgets
String read using fgets: Hello fgets
```

---

## **Comparison**
| **Method**  | **Behavior**                                                                                            | **Example Input** | **Example Output**      | **Limitations**                         |
|-------------|--------------------------------------------------------------------------------------------------------|-------------------|-------------------------|-----------------------------------------|
| `scanf`     | Reads until whitespace or newline is encountered; ignores spaces.                                      | `Hello World`     | `Hello`                 | Cannot read multi-word strings.         |
| `getchar`   | Reads one character at a time until newline; handles spaces.                                           | `Hello World`     | `Hello World`           | Requires a loop; tedious for long input.|
| `gets`      | Reads until newline; handles spaces but unsafe due to potential buffer overflow.                       | `Hello C`         | `Hello C`               | Deprecated and insecure.                |
| `fgets`     | Reads up to a specified length, including spaces, safely; includes newline unless removed.             | `Hello fgets`     | `Hello fgets`           | Includes newline unless explicitly removed.|

---

## **Best Practice**
- **Use `fgets`** for safe and robust string input handling.
- **Avoid using `gets`** as it is deprecated and unsafe in modern C standards.

---

## **How to Compile and Run**

1. **Compile the code**:
   ```bash
   gcc main.c -o string_input_methods
   ```

2. **Run the program**:
   ```bash
   ./string_input_methods
   ```

---

## **License**
This project is open-source and available under the MIT License.

---

## **Contact**
If you have any questions or suggestions, feel free to reach out:

- **Email**: vidyadhar.bendre@gmail.com
