#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: a pointer that points to an array of characters
 * @n: the number of elements of teh array
 *
 * Return: returns a pointer to an array of integers
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
	return (a);
}
