#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (!(i % 3) && !(i % 5))
		{
			printf("FizzBuzz ");
			continue;
		}
		if (!(i % 3))
		{
			printf("Fizz ");
			continue;
		}
		if (!(i % 5))
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
