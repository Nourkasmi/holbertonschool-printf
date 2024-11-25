#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: The format string containing text and directives
 * Return: The number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
va_list args;
int count = 0;
char c, *str;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
c = va_arg(args, int);
count += write(1, &c, 1);
}
else if (*format == 's')
{
str = va_arg(args, char *);
while (*str)
{
count += write(1, str++, 1);
}
}
else if (*format == '%')
{
count += write(1, "%", 1);
}
else
{
count += write(1, "%", 1);
count += write(1, format, 1);
}
}
else
{
count += write(1, format, 1);
}
format++;
}
va_end(args);
return (count);
}
