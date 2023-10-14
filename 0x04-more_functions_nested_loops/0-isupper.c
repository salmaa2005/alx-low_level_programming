#include <stdio.h>
/**
 * _isupper - checks if the character is uppercase
 * @c: it's the character to be checked
 *
 * Return: returns 1 if it's uppercase ,otherwise returns 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
