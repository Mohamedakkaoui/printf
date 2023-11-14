#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: a character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int x;
	va_list print;
	
	x = 0;
	va_start(print, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					x += print_char(print);
					break;
				case 's':
					x += print_string(print);
					break;
				case '%':
					_putchar('%');
					x++;
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(*format);
			x++;
		}
		format++;
	}
	va_end(print);
	return (x);
}
