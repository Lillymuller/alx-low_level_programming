#include "lists.h"

/**
 * _strlen - find string length
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
	list_t *new_node; /* creating  new node */

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /*check if the duplicated strg has malloc error */
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* allocating new memory to the new node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* setting the valus of string to the new node */
	new_node->len = _strlen(str);

	if (head == NULL) /* inisilazing head to point to frist value*/
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node; /* set head to point to new node */

	return (new_node);
}
