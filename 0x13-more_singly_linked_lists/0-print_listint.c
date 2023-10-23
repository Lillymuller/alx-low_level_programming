#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: header pointer
 * Return: number of counted nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t node_count = 0;

	while (h != NULL)
{
	node_count++;
	h = h->next;
}
printf("%ld\n", node_count);

return (node_count);

}
