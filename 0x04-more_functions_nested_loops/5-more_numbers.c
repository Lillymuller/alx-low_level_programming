#include "main.h"
/**
  *more_numbers - print 10 times the numbers from 0 to 14
  *Return: Always 0
  */

void more_numbers(void)
{
	int i;
	int x;

for (x = 0; x < 10; x++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
