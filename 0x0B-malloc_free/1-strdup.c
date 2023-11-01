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

	while (str[len])
		len++;
	ptr = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	return (ptr);
}
