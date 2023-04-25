#include "main.h"

/**
 * _printf - writes formatted output to stdout
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
  int (*pfunc)(va_list);
  const char *p;
  va_list arguments;

  register int count = 0;

  va_start(arguments, format);
  if (!format || (format[0] == '%' && !format[1]))
    return (-1);
  if (format[0] == '%' && format[1] == ' ' && !format[2])
    return (-1);
  for (p = format; *p; p++)
  {
    if (*p == '%')
    {
      p++;
      if (*p == '%')
      {
        count += _putchar('%');
        continue;
      }
      pfunc = get_print(*p);
      count += (pfunc)
                   ? pfunc(arguments)
                   : _printf("%%%c", *p);
    }
    else
      count += _putchar(*p);
  }
  _putchar(-1);
  va_end(arguments);
  return (count);
}
