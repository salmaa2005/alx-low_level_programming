#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: returns 1 on failure and 0 on success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (argc--)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
