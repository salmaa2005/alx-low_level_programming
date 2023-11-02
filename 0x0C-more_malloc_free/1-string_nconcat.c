#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings
* @s1: an array of chars
* @s2: an array of chars
* @n: unsigned integer
*
* Return: returns a pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2 - 1;
	ptr = (char *) malloc((n * sizeof(char)) + len1 + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; i++)
	{
		ptr[j] = s1[j];
	}
	for (i = 0; i < n; i++)
	{
		ptr[j] = s2[i];
	}
	ptr[j] = '\0';
	return (ptr);
}
