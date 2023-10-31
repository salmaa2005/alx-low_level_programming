#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: an integer
 * @c: a character
 *
 * Return: returns a pointer
 */
char *create_array(unsigned int size, char c)
{
	int i, len = 0;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));
	while (ptr[len] != '\0')
		len++;
	if (size == 0)
		return ('\0');
	for (i = 0; i < len; i++)
		*(ptr + i) = c;
	return (ptr);
}
