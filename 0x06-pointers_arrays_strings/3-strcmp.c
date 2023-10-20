#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: a pointer that points to an array of characters
 * @s2: a pointer that points to an array of characters
 *
 * Return: returns an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp;

	while (1)
	{
		cmp = s1[i] - s2[i];
		if (s1[i] == '\0' || s2[i] == '\0' || cmp != 0)
			return (cmp);
		i++;
	}
}
