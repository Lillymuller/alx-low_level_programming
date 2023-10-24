#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node at index of linked list
 * @head: header pointer
 * @index: index for delition node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int abc = 0;
	listint_t *ptr, *replicate;

	if (*head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	else
	{

	while (abc < (index - 1) && ptr != NULL)
	{
		ptr = ptr->next;
		abc++;
	}
	}

	if (abc != (index - 1) || ptr->next == NULL)
		return (-1);

	replicate = ptr->next;
	ptr->next = (ptr->next)->next;
	free(replicate);

	return (1);
}
