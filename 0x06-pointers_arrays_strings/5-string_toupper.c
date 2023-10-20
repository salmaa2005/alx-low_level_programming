#include <stdio.h>
#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: a pointer that points to an array of characters
 *
 * Return: returns a pointer to an array of characters
 */
char *string_toupper(char *a)
{
	int i = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] <= 122 && a[i] >= 97)
			a[i] = a[i] - 32;
	}
	return (a);
}
