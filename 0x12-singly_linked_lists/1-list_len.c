#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
