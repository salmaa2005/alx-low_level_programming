#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a line
 * @n: the number of underscores to be printed
 *
 * Return: returns void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar('\n');
}
