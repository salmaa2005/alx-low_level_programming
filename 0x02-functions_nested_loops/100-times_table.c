#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 * @n: number
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j);
			if (j == n)
				continue;
			if ((i * j) < 10)
				printf(",   ");
			else if ((i * j) < 100)
				printf(",  ");
			else
				printf(", ");
		}
		printf("\n");
	}
}
