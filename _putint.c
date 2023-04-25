#include "main.h"
/**
  * _putint - puts an an int to stdout
  *
  * @n: the integer to print
  * Return: Always 0 (Success)
  */
int _putint(int n)
{
unsigned int num;
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
num = -n;
}
else
{
num = n;
}
if (num / 10)
{
_putint(num / 10);
}
_putchar(num % 10 + '0');
return (0);
}

