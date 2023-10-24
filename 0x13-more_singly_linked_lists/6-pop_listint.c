#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node’s data
 * @head: linked list
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_ptr;
	int travers;

	if (*head == NULL)
		return (0);

	temp_ptr = *head;
	travers = (*head)->n;
	*head = (*head)->next;

	free(temp_ptr);

	return (travers);
}
