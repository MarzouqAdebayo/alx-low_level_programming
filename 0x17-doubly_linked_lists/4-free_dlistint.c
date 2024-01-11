#include "lists.h"

/**
 * free_dlistint - frees a doubly linkedlist
 * @head: pointer to the head of the DLL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *temp;

	while (current)
	{
		temp = current;
		free(current);
		current = temp->next;
	}
}
