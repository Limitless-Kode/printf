#include "main.h"
/**
 * _putchar - writes a character to the standard output
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
int bytes_written = 0;
int total_bytes = 1;
while (bytes_written < total_bytes)
{
int result = write(1, &c + bytes_written, total_bytes - bytes_written);
if (result == -1)
{
/* Error handling code here */
return (-1);
}
bytes_written += result;
}
return (1);
}

