#include "lists.h"

/**
 * print_listint - Prints element of list
 *
 * @h: head of list
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
