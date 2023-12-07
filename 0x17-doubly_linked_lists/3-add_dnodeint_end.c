#include "lists.h"

/**
 * add_dnodeint_end - function that adds node at the end of a list.
 * @head: pointer to pointer to head of list.
 * @n: data to be added.
 *
 * Return: address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_list, *trav;

	/* creat the new node*/
	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	/* chech if head is empty or not*/
	if (*head != NULL)
	{
		new_list->next = *head;
		*head = new_list;
	}
	else
	{
	/* now lest travers our list*/
	/* if trav isat the end of node it will exit the loop*/
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = new_list;
	}
	new_list->prev = trav;
	return (new_list);
}
