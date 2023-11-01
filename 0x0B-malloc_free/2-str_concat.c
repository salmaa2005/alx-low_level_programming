#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: an array of chars
 * @s2: an array of chars
 *
 * Return: returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, j = 1, i;
	char *new;

	if (s1 == NULL && s2 == NULL)
		return ("");
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	new = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new[i] = s1[i];
	for (j = 0; j < len2; j++)
		new[i + j] = s2[j];
	new[i + j] = '\0';
	return (new);
}
