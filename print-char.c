#include "main.h"
/**
 * print-char - function to print a charcater
 * @print : argument
 * Return : 1.
 */
int print_char(va_list print)
{
	char str;

	str = va_arg(print, int);
	_putchar (str);
	return(1);
}