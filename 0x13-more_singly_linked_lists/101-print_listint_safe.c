#include "lists.h"

/**
 * listint_loop - count nodes to know now many unique nodes to print
 * @head: header pointer for the first node
 * Return: returns number of diffrent loop
 */

int listint_loop(const listint_t *head)
{
	int n = 0;
	const listint_t *adu, *abc;

	adu = abc = head;

	while (adu != NULL && abc != NULL)
	{
		adu = adu->next;
		abc = abc->next->next;
		n += 1;

		if (adu == abc)
		{
			adu = head;
			while (adu != abc)
			{
				adu = adu->next;
				abc = abc->next;
				n += 1;
			}
			return (n);
		}
	}
	return (0);
}

/**
 * find_loop - find if a loop in linked list
 * @head: header pointer
 * Return: 0 if there is no loop, 1 if there is loop
 */

int find_loop(const listint_t *head)
{
	const listint_t *adu, *abc;

	adu = abc = head;

	while (adu != NULL && abc != NULL)
	{
		adu = adu->next;
		abc = abc->next->next;

		if (adu == abc)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: header pointer
 * Return: number of nodes, exit(98) if failed
 */

size_t print_listint_safe(const listint_t *head)
{
	int n = 0;
	int get_loop;
	size_t amount_nodes = 0;
	const listint_t *pttr;

	if (head == NULL)
		exit(98);

	get_loop = find_loop(head);

	if (get_loop == 1) /* print all node before loop if ends */
	{
		n = listint_loop(head);
		for (get_loop = 0; get_loop < n; get_loop++)
		{
			printf("[%p] %d\n", (void *)pttr, pttr->n);
			amount_nodes++;
			pttr = pttr->next;
		}
	}
	else if (get_loop == 0)
	{
		pttr = head;
		while (pttr != NULL)
		{
			printf("[%p] %d\n", (void *)pttr, pttr->n);
			amount_nodes++;
			pttr = pttr->next;
		}
	}

	return (amount_nodes);
}
