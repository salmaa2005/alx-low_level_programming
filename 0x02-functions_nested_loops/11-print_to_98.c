#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (n < 10)
			_putchar('0' + n);
		else
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
