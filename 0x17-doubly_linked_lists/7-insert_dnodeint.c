#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at,
 * a given position.
 * @h: pointer to pointer to the h of linked list.
 * @idx: index of the list where the new  node should be added.
 * @n: value of the new node
 * Return:  the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int ab;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n); /* add new node at the begnning*/
	else
	{
		head = *h;
		ab = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (ab == idx)
			{
				/* insert note at the end of list */
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			ab++;
		}
	}
	return (new);
}
