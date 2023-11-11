#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - function tat produces output according to a format
 *
 * @format : a character string
 *
 * Return : number of charcaters printed
 */
int _printf(const char *format, ...)
{
	va_list print;
	int x;
	char *b;

	va_start(print , format);
	if (format == NULL)
	{
		return(-1);
	}
	for (x = 0; *format; x++)
	{
		if (*format != '%')
		{
			_putchar(*format);
		}
		else
		{
			format++;

			if (*format == 'c')
			{
				_putchar(va_arg(print, int));      
			}
			else if (*format == 's')
			{
				b = va_arg(print, char *);
				while (*b != '\0')
				{
					_putchar(*b);
					b++;
				}
			}
			else if(*format == '%')
			{
				_putchar('%');
			}
		}
		format++;
	}
	va_end(print);
	return (x);
}
