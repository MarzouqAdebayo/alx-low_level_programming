#include "lists.h"

/**
 * free_listint - frees memory allocated to a linked list
 * @head: pointer to the start of the linked list
 *
 * Return: has no return value
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
