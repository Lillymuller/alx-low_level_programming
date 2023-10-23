#include "lists.h"

/**
 * listint_len - function that returns the number of elements in listint_t list
 * @h: header pointer
 * Return: number of counted nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	if (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
