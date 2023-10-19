#include "lists.h"

/**
 * _strlen - Gives of string
 * @str: string to get size duplicated string
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
	list_t *new_node;
	list_t *end;
	char *str2 = strdup(str);

	if (str2 == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str2);
		return (NULL);
	}

	new_node->str = str2;
	new_node->len = _strlen(str2);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (end = *head; end->next != NULL; end = end->next)
		;

	end->next = new_node;
	return (new_node);
}
