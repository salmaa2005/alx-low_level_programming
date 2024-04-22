#include "main.h"
/**
 * print_triangle: prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k, l;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = size - i; k >= 0; k--)
				_putchar(' ');
			for (l = 0; l <= i; l++)
				_putchar('#');
			_putchar('\n');
		}
	}
}