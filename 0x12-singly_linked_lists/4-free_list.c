#include "lists.h"

/**
 * free_list - free the memory allocated ot a linked list
 * @head: pointer to the start of the linked list
 *
 * Return: had no return value
*/

void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
