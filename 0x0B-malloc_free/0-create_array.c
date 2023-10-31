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
	if (size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);

}
