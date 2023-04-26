#include "main.h"

/**
  * _putbinary - converts an int to binary format
  * @n: the integer to convert to binary
  *
  * Return: the count
  */

int _putbinary(unsigned int n)
{
int count = 0;

if (n > 1)
{
count += _putbinary(n / 2);
}
_putchar((n % 2) + '0');
count++;
return (count);
}
