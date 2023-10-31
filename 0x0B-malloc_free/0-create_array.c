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
	int i;
	char *ptr;

	ptr = (char *)malloc(size);
	for (i = 0; ptr[i] != '\0'; i++)
		*(ptr + i) = c;
	return (ptr);
}
