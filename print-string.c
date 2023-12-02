#include "main.h"
#include <stddef.h>
/**
 * print_string - function tht rprints a string
 *@arguments
 *Return: the length of the string
 */
int print_string(char *str)
{
	int i, len;

	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}
		return (len);
	}
}
