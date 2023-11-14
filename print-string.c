#include "main.h"
#include <stddef.h>
/** 
 * print_string - prints a string
 * @print : list of argument
 *Return: length of the string
 */
int print_string(va_list print)
{
	int i, length;
	char *str;

	str = va_arg(print, char *);
	if (str == NULL)
	{
		i = 0;
		str = "(null)";
		length = _strlen(str);
		while (i < length)
		{
			_putchar(str[i]);
			i++;
		}
		return (length);
	}
	else
	{
		i = 0;
		length  = _strlen(str);
		while (i < length)
		{
			_putchar(str[i]);
			i++;
		}
		return (length);
	}
}
