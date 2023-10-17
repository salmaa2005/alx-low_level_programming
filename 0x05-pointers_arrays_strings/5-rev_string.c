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
	int length, i, k;

	length = 0;

	while (s[length] != '\0')
		length++;
	char temp[length + 1];

	for (i = length - 1; i >= 0; i--)
	{
		temp[k] = s[i];
		k++;
	}
	temp[k] = '\0';
	for (i = 0; i <= length - 1; i++)
		s[i] = temp[i];
}
