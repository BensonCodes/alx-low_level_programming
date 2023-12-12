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

	if (h->next == NULL)
	{
		printf("%d\n", 0);
		nodes++;
		return (nodes);
	}
	else
	{
		do {
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
		} while (h);
	}
	return (nodes);
}
