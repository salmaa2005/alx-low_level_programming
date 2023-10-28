#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string to a certain destination with a specific number of characters
 * @src: a pointer that points to an array of characters
 * @dest: a pointer that points to an array of characters
 *
 * Return: returns a pointer to an array of characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (s[i] != '\0')
			s[i] = b;
	}
	return (s);
}
