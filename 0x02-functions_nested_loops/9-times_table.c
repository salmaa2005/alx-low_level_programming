#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product >= 10)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(product + '0');
			}
			if (j == 9)
				continue;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
