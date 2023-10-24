#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node’s data
 * @head: linked list
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;

	i = temp->n;

	*head = temp->next; /* link head to next node */
	free(temp);

	return (i);

}
