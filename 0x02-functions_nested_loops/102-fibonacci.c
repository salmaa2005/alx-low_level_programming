#include "main.h"
#include <stdio.h>
int main(void)
{
	int prev, mid, next, i;

	int arr[8];
	arr[0] = 1;
	arr[1] = 2;
	for (i = 1; i < 8; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		if (arr[i] > 50)
			break;
	}
	for (i = 0; i < sizeof(arr) / 4; i++)
	{
		if (i < 7)
			printf("%d, ", arr[i]);
	}
	printf("%d", arr[7]);
	printf("\n");
	return (0);
}
