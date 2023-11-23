#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
