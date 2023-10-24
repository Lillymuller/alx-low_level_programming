#include "lists.h"

/**
 * find_listint_loop - finds the beggining of a loop in a linked list
 * @head: header pointer of the first loop
 * Return: start of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *front, *last;

	if (head == NULL || head->next == NULL)
		return (NULL);

	front = head->next;
	last = (head->next)->next;

	while (last)
	{
		if (front == last)
		{
			front = head;

			while (front != last)
			{
				front = front->next;
				last = last->next;
			}

			return (front);
		}

		front = front->next;
		last = (last->next)->next;
	}

	return (NULL);
}
