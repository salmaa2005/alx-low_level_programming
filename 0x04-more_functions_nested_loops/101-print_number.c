#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		for (n = -n; n > 9; n /= 10)
		{
			_putchar((n % 10) + '0');
		}
	}
	else
	{
		for (n = n; n > 9; n /= 10)
			_putchar((n % 10) + '0');
	}
}
