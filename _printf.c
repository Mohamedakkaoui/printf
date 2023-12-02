#include "main.h"
int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list data;

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
	{
		return (0);
	}
	va_start(data, format);
	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] !=' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(data, int));
					break;
				case 's':
					count += print_string(va_arg(data, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar(format[i + 1]);
					break;
			}  
			i += 2;
		}
	}
	return (count);
}
