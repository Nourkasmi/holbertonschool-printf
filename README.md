# **_printf**
rtft
## **Description**

The `_printf` function is a custom implementation of the C standard library function `printf`. It provides formatted output conversion and printing, supporting various format specifiers to display different data types.

This project is part of the **Low-Level Programming Curriculum** at **Holberton School**

---

## **Features**

- Handles the following format specifiers:
  - `%c` - Prints a single character.
  - `%s` - Prints a string.
  - `%d` and `%i` - Prints integers.
  - `%%` - Prints a literal percent sign.

- Custom-built helper functions for number handling:
  - Recursive integer printing for `%d` and `%i`.

- Error handling:
  - Returns `(null)` if the format string is `NULL`.

- Returns the total number of characters printed.

---

## **Prototype**

```c
int _printf(const char *format, ...);
