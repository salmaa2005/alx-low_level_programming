#include <stdio.h>
/**
 * _isdigit - checks if the character is a digit
 * @c: it's the character to be checked
 *
 * Return: returns 1 if it's a digit ,otherwise returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
