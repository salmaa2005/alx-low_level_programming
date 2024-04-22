#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, sum = 0, i;
	printf("%lu, %lu, ", f1, f2);
	for (i = 0; i < 98; i++)
	{
		sum = f1 + f2;
		if (i < 97)
			printf("%lu, ", sum);
		f1 = f2;
		f2 = sum;
	}
	printf("%lu\n", sum);
	return (0);
}
