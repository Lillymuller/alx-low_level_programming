#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pinter input
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);

		nodes += 1;
		h = h->next;
	}

	return (nodes);
}
