#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - function that produces output according to a format
 *
 * @format : a character string
 *
 *Return: number of charcaters printed
 */
int _printf(const char *format, ...)
{
	va_list print;
	int x, i;
	char *b;

	va_start(print, format);
	if (format == NULL)
		return (0);
	for (x = 0; *format; x++)
	{
		if (*format != '%')
			_putchar(*format);
		else
		{
			format++;	
			if (*format == 'c')
				_putchar(va_arg(print, int));
			else if (*format == 's')
			{
				i  = 0;
				b = va_arg(print, char *);
				if (b == NULL)
					break;
				while (*b != '\0')
					_putchar(*b++);
					i++;
				x += (i - 1);
			}
			else if (*format == '%')
				_putchar('%');
			else
			{
				break;
			}
		}
		format++;
	}
	va_end(print);
	return (x);
}
