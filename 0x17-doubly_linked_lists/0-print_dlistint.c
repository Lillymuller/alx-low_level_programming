#include "lists.h"

/**
 * print_dlistint - function that prints all the elemts of a doubly linked list
 * @h: poiner to the head of the node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t indx = 0;

	/* while h is  a pointer to the node */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		indx++;
		h = h->next;
	}
	return (indx);
}
