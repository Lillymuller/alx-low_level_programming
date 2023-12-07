#include "lists.h"

/**
 * add_dnodeint - function that adds new node at begininning of a dbly,
 * linked list.
 * @head: pointer to pointer to head of list.
 * @n: data to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_list;

	/*now we are going to creat new node*/
	new_list = malloc(sizeof(dlistint_t));

		/*if the code failes*/
		if (new_list == NULL)
			return (NULL);

	/*creat the pinters and data*/
	new_list->prev = NULL;
	new_list->n = n;
	new_list->next = *head;

	/* cheach if head is not empty*/
	if (*head != NULL)
	(*head)->prev = new_list;
	(*head) = new_list;
		return (new_list);
}
