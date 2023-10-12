#include <stdio.h>
/**
 * _islower - checks if the character is lowercase
 * @c: it's the character to be checked
 *
 * Return: returns 1 if it's lowercase ,otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
