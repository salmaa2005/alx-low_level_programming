#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks the sign of the integer
 * @n: it's the integer to be checked
 *
 * Return: returns 1 if it's positive , returns 0 if it's 0
 * and -1 if it's negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar(43);
	return (1);
}
