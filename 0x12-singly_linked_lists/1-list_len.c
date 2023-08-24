#include "lists.h"

/**
 * list_len - Prints the length of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: lenght of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
