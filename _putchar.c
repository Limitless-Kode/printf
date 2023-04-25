#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
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

