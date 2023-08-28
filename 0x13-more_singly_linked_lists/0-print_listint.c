#include "lists.h"

/**
 * print_list - prints all the elements of a linked list.
 * @h: The linked list
 *
 * Return: The minber of nodes int the list
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
