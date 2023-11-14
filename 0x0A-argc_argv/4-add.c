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
	int sum = 0, i;
	char *c;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0 && atoi(argv[i]) < 10)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", sum);
		return (0);
	}
}
