#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: header pointer
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *end;

	if (head == NULL || *head == NULL)
		return (NULL);

	front = NULL;
	while (*head != NULL)
	{
		end = (*head)->next; /* keep taps on the  next node */
		(*head)->next = front;
		front = *head;
		*head = end;
	}
	(*head) = front;

	return (*head);
}
