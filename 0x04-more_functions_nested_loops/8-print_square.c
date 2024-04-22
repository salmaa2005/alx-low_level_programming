#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				printf("#");
			if (j == size - 1)
				continue;
			printf("\n");
		}
	}
}
int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}
