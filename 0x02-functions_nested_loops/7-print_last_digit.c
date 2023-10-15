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

	if (n >= 0)
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
	else
	{
		_putchar((-n % 10) + 48);
		return ((-n) % 10);
	}
}
