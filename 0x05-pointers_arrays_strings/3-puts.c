#include <stdio.h>
#include <unistd.h>
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
		write(1, s[i], _strlen(&str));
	_putchar('\n');
}
