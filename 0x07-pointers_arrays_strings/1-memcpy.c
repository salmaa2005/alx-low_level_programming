#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies a memory area
 * @src: a pointer that points to an array of characters
 * @dest: a pointer that points to an array of characters
 * @n: the number of indeces to be replaced
 *
 * Return: returns a pointer to an array of characters
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] =  src[i];
	}
	return (dest);
}
