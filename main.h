#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _puts(char *str);
int print_char(va_list l);

int print_string(va_list l);

int count_digit(int i);
void print_number(int n);
int _putint(va_list l);

int _printf(const char *format, ...);

int (*get_print(char s))(va_list);

int _putbinary(unsigned int n);

/**
  * struct printHandler - struct to choose the right function depending
  * on the format specifier passed to _printf()
  * @c: format specifier
  * @f: pointer to the function method
  */
typedef struct PrintHandler
{
char c;
int (*f)(va_list ap);
} PrintHandler;

#endif /* MAIN_H */
