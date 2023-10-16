#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: is a pointer to the first index of the string
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i, count;
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
