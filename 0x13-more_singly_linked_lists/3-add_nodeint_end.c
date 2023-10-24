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

	travers = *head;

	temp = malloc(sizeof(listint_t));

	if (travers == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL) /* account for empty list by pointing head to node */
		*head = travers;
	else
	{
		temp = *head; /* set tmp ptr to iterate w/o moving head ptr */

		while (travers->next != NULL) /* iterate till last node */
			travers = travers->next;
		travers->next = temp; /* link last node to new node */
	}

	return (travers);
}
