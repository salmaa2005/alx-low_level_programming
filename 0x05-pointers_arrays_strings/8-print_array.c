#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array followed by a new line
 * @a: a pointer that points to an array of integers
 * @n: the number of integers to be printed
 *
 * Return: returns void
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[i]);
	}
}
