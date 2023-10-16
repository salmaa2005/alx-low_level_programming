#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the integer to be swapped
 * @b: the other integer
 *
 * Return: returns void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
