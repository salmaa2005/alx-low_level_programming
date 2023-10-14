#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14
 * @void
 *
 * Return: returns void
 */
void more_numbers(void)
{
	int i, count;

	for (count = 0 ; count < 10; count++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(49);
			_putchar(48 + i % 10);
		}
		_putchar('\n');
	}
}
