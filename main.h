#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct print_func - a key for picking functions to use for printing
 * in 3-print_all.c
 *
 * @print: function to use for printing
 * @spec: character specifier
 */
typedef struct print_func
{
void (*print)(va_list args);
char spec;
} print_func;



#endif
