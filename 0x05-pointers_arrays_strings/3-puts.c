#include "main.h"

/**
*_puts - to print a string andmove to next line
*@str: string to print
*Return: 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
