#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints slashes like a diagonal
 * @n: the number of slashes to be printed
 *
 * Return: returns void
 */
void print_diagonal(int n)
{
	int x, spaces;

	if (n <= 0)
		_putchar('\n');
	for (x = 1; x <= n; x++)
	{
		for (spaces = 1; spaces < x; spaces++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
