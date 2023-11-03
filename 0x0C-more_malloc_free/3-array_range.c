#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers.
* @min: an int
* @max: an int
*
* Return: returns a pointer
*/
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = (int *) malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
