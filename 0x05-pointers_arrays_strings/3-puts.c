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
	int i, j;

	int count = 0;

	for (j = 0; str[j] != '\0'; s++)
		count++;
	for (i = 0; i < count; i++)
		write(1, str[i], count);
	_putchar('\n');
}
