# **_printf Project**

## **Description**
`_printf` is a custom implementation of the standard C library function `printf`. It formats and prints data to the standard output, supporting specific format specifiers and features.

This project is part of the Holberton School curriculum

---

## **Features**
The `_printf` function supports the following format specifiers:

- **%c**: Prints a single character.
- **%s**: Prints a string.
- **%d**: Prints a decimal integer.
- **%i**: Prints an integer.
- **%%**: Prints a literal `%` character.

---

## **How It Works**
1. The `_printf` function receives a format string and optional arguments.
2. It iterates through the format string:
   - If a character is not `%`, it is printed directly using `_putchar`.
   - If `%` is encountered, the next character determines the action:
     - `%%`: Prints `%`.
     - Valid specifier (`c`, `s`, `d`, `i`): Calls the corresponding function through `correctfunc`.
     - Invalid specifier: Prints `%` followed by the invalid character.
3. The `correctfunc` function uses a table (`specifier_t` struct) to map specifiers to their corresponding functions.
4. Each specific print function (`print_c`, `print_s`, `print_i`, etc.) handles its own type of data and prints it.
5. Returns the total number of characters printed.

---

## **File Descriptions**

### **main.h**
This is the header file containing:
- Function prototypes for `_printf`, `_putchar`, `correctfunc`, and the specific print functions.
- Definition of the `specifier_t` struct for the table.

### **_printf.c**
The core function:
- Manages the parsing of the format string.
- Calls `correctfunc` for format specifiers.
- Uses `_putchar` for direct printing.

### **correctfunc.c**
Handles:
- Matching format specifiers with their corresponding functions using a table (`specifier_t` array).

### **print_functions.c**
Contains:
- `print_c`: Prints a character.
- `print_s`: Prints a string (handles `NULL` strings by printing `(null)`).
- `print_i` and `print_d`: Print integers and decimals, supporting negative numbers.

### **_putchar.c**
A utility function:
- Writes a single character to the standard output.

---

### **Requirements**
- `Operating System`: Linux or macOS.
- `Compiler`: gcc with flags -Wall -Werror -Wextra -pedantic -std=gnu89
- `Followed Betty coding style guidelines`

---

## **Compilation/Installation**
To use `_printf` in your project, clone the repository and compile the source files:
```bash
git clone <https://github.com/wwalid18/holbertonschool-printf>
cd <holbertonschool-printf>
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
``` 
---

### **Example/testing**
```bash

#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'H');
    _printf("String: %s\n", "Hello, world!");
    _printf("Integer: %d\n", 42);
    _printf("Percent: %%\n");

    return (0);
}
```
---
### **Authors** 
This project is made by:

- [![GitHub](https://img.shields.io/badge/GitHub-Nourkasmi-000000?style=flat&logo=github)](https://github.com/Nourkasmi)

- [![GitHub](https://img.shields.io/badge/GitHub-wwalid18-000000?style=flat&logo=github)](https://github.com/wwalid18)

---

### **Flowchart** 

![Project Screenshot](c:\Users\Nourk\Downloads\_printf(“format”,...);.png)
