#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*  - 
* @
* @
* @
*
* Return: returns a pointer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
