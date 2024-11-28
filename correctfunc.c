#include "main.h"

/**
 * correctfunc - chose the corect func
 * @c: spec
 * Return: correct func
 */
int (*correctfunc(char format))(va_list)
{
specifier_t spec_table[] = {
{'c', print_c}, {'s', print_s}, {'i', print_i}, {'d', print_d}, {0, NULL}
};
int i;
for (i = 0; spec_table[i].spec; i++)
{
if (spec_table[i].spec == format)
return (spec_table[i].func);
}
return (NULL);
}
