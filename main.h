#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct function
{
	char *spec;
	int (*function)();
}search;

int _strlen(char *str);
int print_char(va_list print);
int print_perc(void);
int print_string(char *);
int _putchar(char c);
int _printf(const char *format, ...);


#endif
