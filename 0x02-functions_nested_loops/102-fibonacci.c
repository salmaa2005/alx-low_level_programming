#include "main.h"
#include <stdio.h>
int main(void)
{
	int i;
	int arr[50];

	arr[0] = 1;
	arr[1] = 2;
	for (i = 1; i < 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < 50; i++)
	{
		if (i < 49)
			printf("%d, ", arr[i]);
	}
	printf("%d", arr[49]);
	printf("\n");
	return (0);
}
