#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: header pointer
 */

void free_listint(listint_t *head)
{
	listint_t *index;

	if (head == NULL) /* if head is pointing to empty node */
		return;

	while (head != NULL)
	{
		index = head;
		head = head->next; /* move to next node while ptr frees prior */
		free(index);
	}
}
