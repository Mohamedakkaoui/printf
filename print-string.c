#include "main.h"
#include <stddef.h>
/**
 * print_string - function tht rprints a string
 *@arguments
 *Return: return the length of the string
 */
int print_string(va_list print)
{
	char *str;
	int i;

	str = va_arg(print, char *);
	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}
}
