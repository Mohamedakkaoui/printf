#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _strlen(char *str);
int print_string(va_list print);
int print_char(va_list print);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
