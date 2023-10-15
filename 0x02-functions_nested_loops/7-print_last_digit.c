#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: it's the integer to be checked
 *
 * Return: returns the last digit of a character
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * -1;
	}
	else
	{
		n = n % 10;
	}
	_putchar (n + 48);
	return (n);
}
