#include "lists.h"

/**
 * _strlen - size of string
 * @str: string to get size of
 * Return: size of string
 */
int _strlen(const char *str)
{
	int length;

	for (length = 0; str[length]; length++)
		;

	return (length);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: struct list_t, node
 * @str: string to be duplicated
 * Return: new list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	char *string = strdup(str);

	if (string == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(string);
		return (NULL);
	}

	new_node->str = string;
	new_node->len = _strlen(string);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (last = *head; last->next != NULL; last = last->next)
		;

	last->next = new_node;
	return (new_node);
}
