#include <limits.h>
#include <stdio.h>
#include "main.h"
#include "stdio.h"

/**
 *  main - Entry point*
 * Return: Always 0
 */
int main(void)
{

	int string1;
	int string, string2, string3;

	string = printf("String:[%s]\n", "I am a string !");
	printf("%d\n", string);
	string1 = _printf("String:[%s]\n", "I am a string !");
	printf("%d\n", string1);
	_printf("tis is ur make %%100");
	_printf("this is ur mark % kinda");
	_printf("");
	_printf("letcs's");
	_printf("Let's try to printf a simple sentence.\n");
	string3 = printf("Character:[%c]\n", 'H');
	printf("%d\n", string3);
	string2 = _printf("Character:[%c]\n", 'H');
	printf("%d\n", string2);
	_printf("String:[%s]\n", "I am a string !");
	return (0);
}
