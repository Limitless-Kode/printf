#include "main.h"

/**
 * print_octal - prints a number in base 8
 * @l: va_list arguments from _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_octal(va_list l)
{
unsigned int num = va_arg(l, unsigned int);
char *str = _convert(num, 8, 0);
int count = 0;

count += _puts(str);
return (count);
}
