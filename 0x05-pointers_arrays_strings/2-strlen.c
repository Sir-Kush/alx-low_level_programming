#include "main.h"

/**
 * _strlen - a return function
 * @s: string to check
 *
 * Return: len as int
 */


int _strlen(char *s)
{
	int len = 0;

	while ((s[len]) != '\0')
		len++;
	return (int len);
