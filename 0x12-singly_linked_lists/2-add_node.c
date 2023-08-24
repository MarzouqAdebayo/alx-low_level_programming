#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to linked list pointer
 * @str: string
 *
 * Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->next = *head;
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	*head = new_node;

	return (new_node);
}
