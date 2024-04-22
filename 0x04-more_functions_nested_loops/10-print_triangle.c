#include "main.h"
#include <stdio.h>
/**
 * print_triangle: prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void _putchar(char c)
{
	printf("%c", c);
}
void print_triangle(int size)
{
	int i, j, k, l;
	if (size < 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (k = size - i; k >= 0; k--)
			_putchar(' ');
		for (l = 0; l <= i; l++)
			_putchar('#');
		_putchar('\n');
	}
}
int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	return (0);
}
