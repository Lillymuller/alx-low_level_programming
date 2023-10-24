#include "lists.h"

/**
 * find_listint_loop - finds the beggining of a loop in a linked list
 * @head: header pointer of the first loop
 * Return: start of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *end, *front;

	while (head && (*head).next)
	{
		end = head;
		front = (*head).next;
		while (end != front)
		{
			if (end)
				end = (*end).next;
			if (front == head)
				return (head);
			else if (front)
				front = (*front).next;
			if (front == head)
				return (head);
			else if (front)
				front = (*front).next;
			if (front == head)
				return (head);
		}
		head = (*head).next;
	}
	return (NULL);
}
