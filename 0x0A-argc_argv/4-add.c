#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	if (argc < 2)
		printf("0\n");

	while (argc--)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' && *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
