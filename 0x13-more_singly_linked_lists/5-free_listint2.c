#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: header pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head != NULL) /* new visites all the nodes head goes too*/
	{
		new = *head;
		*head = new->next; /* move to next node while ptr frees prior */
		free(new);
	}

}
