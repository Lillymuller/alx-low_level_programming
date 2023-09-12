#include "main.h"
/**
*print_sign - show 1 if a number is greater than 0, show 0 if a number is 0 and show a -1 if a number is less than 0
*@n: integer
* Return: 1 is greater than zero, 0 is zero, -1 less than zero
*/
int print_sign(int n)
{
if (n > 0)
	{
		_putchar('+');
		return (1);
	}
else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
