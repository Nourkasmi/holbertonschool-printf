#include "main.h"

/**
 * print_s - print string
 * @args:argument
 * Return: string
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
}
/**
 * print_i -prints integer
 * @args: argument to print
 * Return: length
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