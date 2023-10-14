#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints the numbers except 2 , 4
 * @void
 *
 * Return: returns void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 50; i < 52; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
