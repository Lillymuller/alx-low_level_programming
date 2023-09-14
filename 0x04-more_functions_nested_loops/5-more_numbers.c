#include "main.h"
/**
  *more_numbers - print 10 times the numbers from 0 to 14
  *Return: Always 0
  */

void more_numbers(void)
{
	int i;
	int j;

	for (i = '1'; i <= '9'; i++)
	{
		for (j = '0'; j < 14; j++)
		{
			if (j / 10 > 0)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
