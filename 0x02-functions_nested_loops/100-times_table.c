#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 * @n: number
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			while (product < 10)
				printf(",   ");
			while (product < 100 && product >= 10)
				printf(",  ");
			while (product >= 100)
				printf(", ");
			printf("%d", i * j);
			if (j == n)
				continue;
		}
		printf("\n");
	}
}
