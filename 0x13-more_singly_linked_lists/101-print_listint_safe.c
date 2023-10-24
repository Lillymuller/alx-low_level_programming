#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: header pointer
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int m, sign = 0;
	listint_t *end, *frist;

	if (!head)
		exit(98);
	for (m = 1; (*head).next && !frist; head = (*head).next, m++)
	{
		if ((*head).next)
			end = (*head).next;
		if ((*head).next->next)
			frist = (*head).next->next;
		while (end != frist)
		{
			if (end)
				end = (*end).next;
			if (frist == head)
				sign = 1;
			if (frist && !sign)
				frist = (*frist).next;
			if (frist == head)
				sign = 1;
			if (frist && !sign)
				frist = (*frist).next;
			if (frist == head)
				sign = 1;
		}
		printf("[%p] %d\n", (void *)head, (*head).n);
	}

	for (; frist && (*head).next != frist; m++, head = (*head).next)
		printf("[%p] %d\n", (void *)head, (*head).n);
	printf("[%p] %d\n", (void *)head, (*head).n);
	if (frist)
		printf("-> [%p] %d\n", (void *)frist, (*frist).n);
	return (m);
}
