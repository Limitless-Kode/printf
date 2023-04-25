#include "main.h"
/**
 * _putstring - writes a string to the standard output
 * @str: The string to print
 *
 * Return: The number of characters written.
 */
int _putstring(char *str)
{
if (str == NULL)
{
return (0);
}
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
return (i);
}

