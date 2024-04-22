#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	long long arr[50];

	arr[0] = 1;
	arr[1] = 2;
	for (i = 2; i < 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < 49; i++)
	{
		printf("%lld, ", arr[i]);
	}
	printf("%lld", arr[49]);
	printf("\n");
	return (0);
}
