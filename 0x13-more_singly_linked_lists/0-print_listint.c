#include "lists.h"

/**
 * print_listint - Print all elements of a the  list
 * @h: Header pointer
 *
 * Return: Number of counted nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		nodes_count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes_count);
}
