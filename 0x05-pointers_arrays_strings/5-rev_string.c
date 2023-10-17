#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a pointer that points to an array of characters
 *
 * Return: returns void
 */
void rev_string(char *s)
{
	int length, i, k = 0;
	char temp;

	length = 0;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		temp = s[i];
		s[i] = s[k];
		s[k] = temp;
		k++;
	}
}

