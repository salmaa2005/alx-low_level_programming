#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array
* @nmemb: unsigned int
* @size: unsigned int
*
* Return: returns a pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
