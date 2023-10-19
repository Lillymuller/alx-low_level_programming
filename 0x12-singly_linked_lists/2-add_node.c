#include "lists.h"

/**
 * _strlen - gives string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * add_node - add node at the beginning of linked list
 * @head: linked list pointer
 * @str: needs to be duplicated
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *string = strdup(str);

	if (string == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* allocating memory to new_node */
	if (new_node == NULL)
	{
		free(string);
		return (NULL);
	}
	new_node->str = string;
	new_node->len = _strlen(string);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
