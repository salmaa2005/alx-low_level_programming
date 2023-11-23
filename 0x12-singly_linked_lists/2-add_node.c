#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length
 */
size_t _strlen(const char *s)
{
	size_t i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new)
			return (NULL);
		new->len = _strlen(str);
	}
	new->next = *head;
	*head = new;
	return (new);
}
