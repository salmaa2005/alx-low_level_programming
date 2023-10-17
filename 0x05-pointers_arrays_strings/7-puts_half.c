#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: a pointer that points to an array of characters
 *
 * Return: returns void
 */
void puts_half(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length - 2) / 2; i < length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
