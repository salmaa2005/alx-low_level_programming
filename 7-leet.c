#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: a pointer that points to an array of characters
 *
 * Return: returns a pointer to an array of characters
 */
char *leet(char *s)
{
	int i, j;
	char check[5] = {'A', 'E', 'O', 'T', 'L'};
	int nums[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == check[j] || s[i] == check[j] + 32)
				s[i] = nums[j];
		}
	}
	return (s);
}
