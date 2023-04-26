#include "main.h"

/**
* _putint - puts an an int to stdout
*
* @l: va_list argument
* Return: number of digits printed
*/
int _putint(va_list l)
{
long int n = va_arg(l, int);
int res = count_digit(n);

if (n < 0)
{
_putchar('-');
n = -n;
}

print_number(n);
return (res);
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_number(int n)
{
unsigned long int n1;

if (n < 0)
{
_putchar('-');
n1 = -n;
}
else
n1 = n;

if (n1 / 10)
print_number(n1 / 10);
_putchar((n1 % 10) + '0');
}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
int d = 0;
unsigned long int u;

if (i < 0)
{
d++;
u = -i;
}
else
{
u = i;
}

if (u == 0)
{
return (1);
}

while (u != 0)
{
u /= 10;
d++;
}

return (d);
}

