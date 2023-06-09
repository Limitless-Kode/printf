#include "main.h"

/**
 * _print_address - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int _print_address(va_list l)
{
char *str;
unsigned long int p = va_arg(l, unsigned long int);

register int count = 0;

if (!p)
return (_puts("(nil)"));
str = _convert(p, 16, 1);
count += _puts("0x");
count += _puts(str);
return (count);
}
