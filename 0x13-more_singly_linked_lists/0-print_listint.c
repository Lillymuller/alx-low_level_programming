#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print all elements of a the Listint_t list
 * @h: Header pointer
 * Return: Number of counted nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes_count += 1;
		h = h->next;
	}

	return (nodes_count);
}
