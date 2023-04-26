#include "main.h"

/**
 * _convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Description: converts number and base into string
 * Return: result string
 */
char *_convert(unsigned long int num, int base, int lowercase)
{
static char *rep;
static char buffer[50];
char *ptr;

rep = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
ptr = &buffer[49];
*ptr = '\0';
do {
*--ptr = rep[num % base];
num /= base;
} while (num != 0);

return (ptr);
}
