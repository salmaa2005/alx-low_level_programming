#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string of a specific number of characters
 * @src: a pointer that points to an array of characters
 * @dest: a pointer that points to an array of characters
 * @n: the number of characters to be written
 *
 * Return: returns a pointer to an array of characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0' && i < s_length)
		{
			dest[i] = src[i];
		}
		else
			dest[i] = '\0';
	}
	return (dest);
}
