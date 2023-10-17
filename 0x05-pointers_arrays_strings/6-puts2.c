#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string, followed by a new lin
 * @str: a pointer that points to an array of characters
 *
 * Return: returns void
 */
void puts2(char *str)
{
	int i, length;

	length = 0;

	while (str[length] != '\0')
		length++;
	for (i = 0; i < length; i = i + 2)
		_putchar(str[i]);
}
