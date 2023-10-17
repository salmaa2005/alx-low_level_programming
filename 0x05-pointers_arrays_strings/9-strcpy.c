#include <stdio.h>
#include "main.h"
/**
 * _strcpy - function that copies the string into another array
 * @src: a pointer that points to an array of characters
 * @dest: a pointer that points to an array of characters
 *
 * Return: returns an array of characters
 */
char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	while (src[length] != '\0')
		length++;
	for (i = 0; i <= length; i++)
		dest[i] = src[i];
	return (dest);
}
