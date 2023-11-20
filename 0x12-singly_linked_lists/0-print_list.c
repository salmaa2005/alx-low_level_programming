#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
