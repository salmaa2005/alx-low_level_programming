#include <stdio.h>
/**
 * _sign - checks the sign of the integer
 * @n: it's the integer to be checked
 *
 * Return: returns 1 if it's positive , returns 0 if it's 0 and -1 if it's negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		printf("-");
		return (-1);
	}
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	printf('+');
	return (1);
}
