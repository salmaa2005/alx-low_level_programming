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

	for (i = 48; i < 58; i++)
		_putchar(i);
	for (i = 0; i < 5; i++)
		_putchar(1 + i);
	_putchar('\n');
}
