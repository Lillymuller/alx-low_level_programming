#include "main.h"
/**
*_islower - Prints 1 if the alphabite is a lowercase and 0 if not
*@c: The character in the ASCII code
*Return: 1 for lowercase character and 0 for the rest
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

