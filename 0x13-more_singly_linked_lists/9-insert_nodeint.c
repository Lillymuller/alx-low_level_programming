#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: header pointer to the first node
 * @idx: index to the new node to be add
 * @n: data value for the new node
 * Return: address of new node, or  NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int abc = 0;

	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* setting for idx 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* sets to 1 before nth index get inserted*/
	temp = *head;
	while (abc < (idx - 1))
	{
		temp = temp->next;
		abc++;

		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	/* link into list */
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
