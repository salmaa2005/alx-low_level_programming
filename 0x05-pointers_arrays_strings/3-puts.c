#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: a pointer to a string (array of characters)
 *
 * Return: returns void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(&str); i++)
		_putchar('s[i]');
	_putchar('\n');
}
