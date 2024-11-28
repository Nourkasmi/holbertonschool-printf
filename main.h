#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*cf(char c))(va_list);
int _putchar(char c);
int print_s(va_list args);
int print_i(va_list args);
int print_c(va_list args);
int print_d(va_list args);

/**
 * struct specifier - Struct to map a format specifier to a print function
 * @func: function to use for printing
 * @spec: character specifier
 */
typedef struct specifier
{
char spec;
int (*func)(va_list args);
} specifier_t;

#endif
