#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	long arr[32], sum = 0;

	arr[0] = 1;
	arr[1] = 2;
	for (i = 2; i < 32; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < 32; i++)
	{
		if (arr[i] % 2 == 0)
			sum += arr[i];
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
