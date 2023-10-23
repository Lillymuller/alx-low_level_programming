#include "lists.h"

/**
 * print_listint - print all elements of a  list
 * @h: header pointer
 * Return: number of counted nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /*prints  the value of the data */

		node_count++;
		h = h->next;
	}

	return (node_count);
}
