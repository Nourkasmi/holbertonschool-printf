#include "main.h"

/**
 * print_c - Prints a character
 * @args: va_list containing the character to print
 * Return: Number of characters printed (always 1)
 */
int print_c(va_list args)
{
char c = va_arg(args, int);
write(1, &c, 1);
return (1);
}

/**
 * print_s - Prints a string
 * @args: va_list containing the string to print
 * Return: Number of characters printed
 */
int print_s(va_list args)
{
int i;
char *str = va_arg(args, char *);
if (str == NULL)
{
char *null_string = "(null)";
for (i = 0; null_string[i] != '\0'; i++)
{
_putchar(null_string[i]);
}
return (1);
}
else
{
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
return (i);
}
if (str == (char *)0)
{
return (i - 16);
}
}

/**
 * print_i - Prints an integer
 * @args: va_list containing the integer to print
 * Return: Number of characters printed
 */
int print_i(va_list args)
{
int d = 1,
length = 0,
num = va_arg(args, int);
unsigned int temp;
temp = num;
if (num < 0)
{
_putchar('-');
temp = -num;
length++;
}
while (temp / d > 9)
{
d *= 10;
}
while (d != 0)
{
_putchar(temp / d + '0');
temp %= d;
length++;
d /= 10;
}
return (length);
}


/**
 * print_d - Prints a decimal (alias for print_int)
 * @args: va_list containing the decimal to print
 * Return: Number of characters printed
 */
int print_d(va_list args)
{
return (print_i(args));
}
