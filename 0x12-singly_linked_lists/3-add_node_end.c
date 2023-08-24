#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to linked list pointer
 * @str: string
 *
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *h = *head;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	while (h->next)
		h = h->next;
	h->next = new_node;

	return (new_node);
}
