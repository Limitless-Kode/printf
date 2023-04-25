#include "main.h"

int _putint(int n)
{
unsigned int num;

if (n < 0)
{
_putchar('-');
num = -n;
}
else
num = n;

if (num / 10)
_putint(num / 10);

_putchar(num % 10 + '0');
return (0);
}

