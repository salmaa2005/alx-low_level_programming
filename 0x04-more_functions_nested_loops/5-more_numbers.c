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
	int i;

	for (i = 0; i < 14; i++)
	{
		if (i >= 10)
			_putchar(49);
		_putchar(48 + i);:wq
	}
}
