#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: a pointer that points to an array of characters
 * @accept: a pointer that points to an array of characters
 *
 * Return: Returns the number of bytes in s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[i] != accept[i])
				break;
		}
	}
	return (i + 1);
}
