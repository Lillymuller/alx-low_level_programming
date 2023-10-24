#include "lists.h"

/**
 * print_listint - print all elements of a the  list
 * @h: header pointer
 * Return: number of counted nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		nodes_count++;
		printf("%d\n", h->n); /*prints  the value of the data */

		h = h->next;
	}

	return (nodes_count);
}
