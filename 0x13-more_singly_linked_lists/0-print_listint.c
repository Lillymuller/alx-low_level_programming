#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: pinter input
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes;

	for (nodes = 0; h; h = (*h).next, nodes++)
		printf("%d\n", (*h).n);

	return (nodes);
}
