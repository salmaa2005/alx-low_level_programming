#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *traverse_ptr;
	size_t i = 0;

	new = malloc(sizeof(list_t));
	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		while (str[i] != '\0')
			i++;

		new->len = i;
		new->next = NULL;
	}
	traverse_ptr = *head;
	if (traverse_ptr)
	{
		for (; traverse_ptr->next; traverse_ptr = traverse_ptr->next)
			;
		traverse_ptr->next = new;
	}
	else
		*head = new;
	return (new);
}
