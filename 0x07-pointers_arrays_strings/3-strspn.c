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
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				count++;
		}
	}
	return (count);
}
