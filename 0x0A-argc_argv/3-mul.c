#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: returns 1 on failure
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
