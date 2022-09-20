#include "main.h"

/**
 * _strlen - a return function
 * @s: string
 *
 * Return: len as integer
 */


int _strlen(char *s)
{
	int len = 0;6

	while (s[len])
		len++;
	return (len);
