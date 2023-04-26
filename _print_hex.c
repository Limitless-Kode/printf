#include "main.h"

/**
 * print_hex - prints a number in hexadecimal base,
 * in lowercase
 * @l: va_list arguments from _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hex(va_list l)
{
unsigned int num = va_arg(l, unsigned int);
char *str = _convert(num, 16, 1);
int count = 0;

count += _puts(str);
return (count);
}

/**
 * print_hex_big - prints a number in hexadecimal base,
 * in uppercase
 * @l: va_list arguments from _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hex_big(va_list l)
{
unsigned int num = va_arg(l, unsigned int);
char *str = _convert(num, 16, 0);
int count = 0;

count += _puts(str);
return (count);
}

