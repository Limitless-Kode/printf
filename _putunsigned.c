#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @l: va_list of arguments from _printf
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int _putunsigned(va_list l)
{
unsigned int u = va_arg(l, unsigned int);
char *str = _convert(u, 10, 0);

return (_puts(str));
}
