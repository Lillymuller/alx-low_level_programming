#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: header pointer
 * @index: indicates nth node
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int abc = 0;

	if (head == NULL)
		return (NULL);

	while ((abc < index) && head != NULL)
	{
		head = head->next;
		abc += 1;
	}

	if (abc == index)
		return (head);

	return (NULL);
}
