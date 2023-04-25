#include "main.h"


/**
 * _printf - writes formatted output to stdout
 * @format: The format string
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...) {
int count = 0;
va_list args;
va_start(args, format);

while (*format) {
if (*format == '%') {
format++;
switch (*format) {
case 'c': {
char c = va_arg(args, int);
write(1, &c, 1);
count++;
break;
}
case 's': {
char *s = va_arg(args, char *);
write(1, s, strlen(s));
count += strlen(s);
break;
}
case '%': {
write(1, "%", 1);
count++;
break;
}
default: {
// Unknown format specifier.
break;
}
}
} else {
write(1, format, 1);
count++;
}
format++;
}

va_end(args);
return count;
}

