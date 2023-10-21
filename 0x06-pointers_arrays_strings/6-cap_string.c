# nclude <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @a: a pointer that points to an array of characters
 *
 * Return: returns a pointer to an array of characters
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i = 0)
			a[i] -= 32;
		switch (a[i])
		{
			case ' ':
			case '\n':
			case '\t':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			if (a[i + 1] <= 122 && a[i + 1] >= 97)
				a[i + 1] -= 32;
			break;
		}
	}
	return (a);
}
