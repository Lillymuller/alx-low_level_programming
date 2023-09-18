#include <stdio.h>
#include "main.h"
/**
  *_puts - writes a string followed with a new line
  *@str: string
  */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
