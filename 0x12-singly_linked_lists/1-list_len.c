#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: list_t pointer
 * Return: number of elements in list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0; /* inisilaze count to zero */

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
