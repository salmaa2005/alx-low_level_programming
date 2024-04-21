#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number
 * Return: 0
 */
void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (n < 10)
				_putchar('0' + i);
			else
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i < 100)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
			else
			{
				_putchar('0' + (i / 100));
				_putchar('0' + (i / 10) % 10);
				_putchar('0' + (i % 10));
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
