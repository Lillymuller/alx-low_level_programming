#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: header pointer
 * @n: data to be added to the new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *travers, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		travers = *head;

		while (travers->next != NULL) /* visites an till last node */
			travers = travers->next;
		travers->next = temp; /* link last node to new node */
	}

	return (temp);
}
