#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a,
 * linked list.
 * @head: pointer to pointer to the h of linked list.
 * @index: ndex of the node that should be deleted. Index starts at 0.
 *
 * Return: if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first;
	dlistint_t *temp;
	unsigned int add;

	first = *head;

	if (first != NULL)
		while (first->prev != NULL)
			first = frist->prev;
	add = 0;

	while (first != NULL)
	{
		if (add == index)
		{
			if (add == 0)
			{
				*head = first->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = temp->next;

				if (temp->next != NULL)
					temp->next->prev = temp;
			}
			free(first);
			return (1);
		}
		temp = first;
		first = first->next;
		add++;
	}
	return (-1);
}
