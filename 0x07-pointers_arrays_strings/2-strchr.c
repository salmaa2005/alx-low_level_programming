#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: a pointer that points to an array of characters
 * @c: the character to be searched for
 *
 * Return: returns a pointer to an index
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
