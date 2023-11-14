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
	int i, total = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c != '\0'; c++)
		{
			if (*c >= '0' && *c <= '9')
				return (printf("Error\n"), 1);
			total += atoi(c);
		}
		printf("%d\n", total);
		return (0);
	}
}
