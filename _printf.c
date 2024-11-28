#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string containing specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, len = 0, j = 0;
specifier_t spec_table[] = {
{'c', print_c}, {'s', print_s}, {'i', print_i}, {'d', print_d}, {0, NULL}
};
if (format == NULL)
return (0);
va_start(args, format);
if (format == NULL)
return (0);
while (format[i])
{
if (format[i] == '%' && format[i + 1] == '%')
{
_putchar('%');
len++;
i += 1;
}
else if (format[i] == '%' && format[i + 1] != '\0')
{
i++;
for (j = 0; spec_table[j].spec; j++)
{
if (spec_table[j].spec == format[i])
{
len += spec_table[j].func(args);
break;
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
