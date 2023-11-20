#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @str: string to get the length of
 * Return: length
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
