#include "lists.h"

/**
 * free_listint_safe - function that free a listint_t linked list
 * @h: header pointer
 * Return:  number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
	int n, sign = 0;
	listint_t *frist, *second, *remove;

	if (h == NULL)
		return (0);

	for (n = 0; *h && !sign; n++)
	{
		second = *h;
		frist = (**h).next;
		while (second != frist)
		{
			if (second)
				second = (*second).next;
			if (frist)
				frist = (*frist).next;
			else if (frist == *h)
				sign = 1;
			if (frist)

				frist = (*frist).next;
			else if (frist == *h)
				sign = 1;
		}

		remove = *h;
		*h = (**h).next;
		free(remove);
	}

	while (sign && *h != frist)

	{
		remove = *h;
		n += 1;
		*h = (**h).next;
		free(remove);
	}
*h = NULL;
return (n);
}
