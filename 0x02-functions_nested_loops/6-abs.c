#include <stdio.h>
#include "main.h"
/**
 * _abs - calculates the absolute of the number
 * @x: it's the integer to be calculated
 *
 * Return: returns the absolute of the number
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	return (-x);
}
