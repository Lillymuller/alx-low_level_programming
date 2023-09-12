#include "main.h"
/**
*_isalpha - show 1 if the input a letter Another case, if not show 0
*@c: The character ASCII code
*Return: 1 for letters lowercase and uppercase  and 0 for the rest
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
_putchar('\n');
}

