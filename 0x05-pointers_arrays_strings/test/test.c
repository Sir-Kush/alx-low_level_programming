#include <stdio.h>

/**
* reset_to_98 - set integer to 98
* @n: a pointer to integer we want update to point 98
*
Return: nothing.
*/
void reset_to_98(int *n)
{
	printf("Value of 'n':%p\n", n);
	printf("Address of 'n':%p\n", &n);
	*n = 98;
}
#include <stdio.h>

/**
 * main - check my code
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n",n);
	reset_to_98(&n);
	printf("n=%d\n",n);
	return (0);
}
