#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a,
 * linked dlistint_t list.
 * @h: poiner to the head of the node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t indx = 0;

	/* while h is a pointer to the node */
	while (h != NULL)
	{
		indx++;
		h = h->next;
	}
	return (indx);
}
