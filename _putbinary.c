#include "main.h"

/**
 * _putbinary - puts an an unsigned int as binary to stdout
 *
 * @n: the value to convert to binary
 * Return: Number of binary digits printed
 */

unsigned int count_binary_digits(unsigned int n);

int _putbinary(va_list l)
{
unsigned int n = va_arg(l, unsigned int);
unsigned int res = count_binary_digits(n);

_print_binary(n);
return (res);
}

/**
 * _print_binary - helper function that loops through
 *                 an integer and prints all its digits in binary
 * @n: integer to be printed
 */
void _print_binary(unsigned int n)
{
if (n / 2)
_print_binary(n / 2);
_putchar((n % 2) + '0');
}

/**
 * count_binary_digits - returns the number of binary digits in an integer
 * for %b conversion specifier
 * @n: integer to evaluate
 * Return: number of binary digits
 */
unsigned int count_binary_digits(unsigned int n)
{
unsigned int d = 0;
while (n != 0)
{
n /= 2;
d++;
}
return (d);
}

