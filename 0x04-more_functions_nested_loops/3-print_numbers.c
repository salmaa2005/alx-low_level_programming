#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers from 1 to 9
 * @void
 *
 * Return: returns void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
