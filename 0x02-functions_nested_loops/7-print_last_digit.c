#include <stdio.h>
/**
 * _islower - checks if the character is lowercase
 * @c: it's the character to be checked
 *
 * Return: returns 1 if it's lowercase ,otherwise returns 0
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		printf ("%d", n%10);
		return (n%10);
	}
	return ((-n)%10);
}
