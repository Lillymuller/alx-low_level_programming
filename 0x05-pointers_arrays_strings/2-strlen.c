#include <stdio.h>
#include "main.h"
/**
  * _strlen - return the length of a string
  *@s: pointer of a character
  *Return: length of string
  */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
