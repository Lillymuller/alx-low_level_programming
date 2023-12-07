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

	first = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (first == NULL)
			return (-1);
		first = first->next;
	}

	if (first == *head)
	{
		*head = first->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		first->prev->next = first->next;
		if (first->next != NULL)
			first->next->prev = first->prev;
	}

	free(first);
	return (1);
}
