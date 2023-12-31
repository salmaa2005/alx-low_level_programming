#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - executes a function given as a parameter
* @array: kdgc
* @size: lsuyd
* @action: kuyugi
*
* Return: returns void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
