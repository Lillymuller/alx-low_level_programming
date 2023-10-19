#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t memory
 * @head: pointer to  list_t
 */

void free_list(list_t *head)
{
	list_t *abc;

	while (head != NULL)
	{
		abc = head; /* assigment of head to abc */
		head = head->next;
		free(abc->str);
		free(abc);
	}
}
