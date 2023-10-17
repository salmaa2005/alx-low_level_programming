#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a pointer that points to an array of characters
 *
 * Return: returns void
 */
void print_rev(char *s)
{
	int length, i;

	while (s[length] != '\0')
		length++;
	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
