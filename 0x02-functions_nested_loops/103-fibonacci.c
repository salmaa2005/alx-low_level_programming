#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	long arr[50], sum = 0;

	arr[0] = 1;
	arr[1] = 2;
	for (i = 2; i < 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		if (arr[i] > 4000000)
			break;
	}
	for (i = 0; i < 49; i++)
	{
		if (arr[i] % 2 == 0)
			sum += arr[i];
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
