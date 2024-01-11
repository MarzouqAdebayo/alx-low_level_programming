#include "lists.h"

/**
 * print_dlistint - prints a doubly linkedlist
 * @h: pointer to the head of the doubly linkedlist
 *
 * Return: the size of the doubly linkedlist
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	};
	return (size);
}
