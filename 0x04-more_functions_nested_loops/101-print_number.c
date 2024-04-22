#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	int i, digits[10];
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for (i = 0; n > 0; i++)
	{
		digits[i] = n % 10;
		n = n / 10;
	}
	for (i = i - 1; i >= 0; i--)
		_putchar(digits[i] + '0');
}
