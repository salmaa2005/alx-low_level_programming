#include <stdio.h>
/**
 *  * islower - checks if lowercase
 *   *
 *    * Return: 1 if lowercase, else 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
