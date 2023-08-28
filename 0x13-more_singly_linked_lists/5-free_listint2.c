#include "lists.h"

/**
 * free_listint2 - frees memory allocated to a linked list
 * @head: pointer to the start of the linked list
 *
 * Return: has no return value
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
