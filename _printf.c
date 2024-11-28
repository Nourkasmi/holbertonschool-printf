#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string containing specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, len = 0;
int (*func)(va_list);
if (format == NULL)
return (-1);
va_start(args, format);
while (format[i])
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
{
va_end(args);
return (-1);
}
if (format[i + 1] == '%')
{
_putchar('%');
len++;
i++;
}
else
{
i++;
func = cf(format[i]);
if (func)
len += func(args);
else
{
_putchar('%');
_putchar(format[i]);
len += 2;
}
}
}
else
{
_putchar(format[i]);
len++;
}
i++;
}
va_end(args);
return (len);
}
