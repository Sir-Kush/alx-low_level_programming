#include "main.h"

/**
 * _strlen - check the length of a string
 * @s: string to check
 *
 * Return:int len of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
