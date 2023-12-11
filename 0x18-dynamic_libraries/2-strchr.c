#include "main.h"
#define NULL 0

/**
 * _strchr - when finds 1st occurrence of char and returns pointer there
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if it  matchs assign the address */
		return (&s[i]);
	else
		return (NULL);
}
