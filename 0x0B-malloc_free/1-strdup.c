#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: an array of characters
 *
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (str[len])
		len++;
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	return (ptr);
}
