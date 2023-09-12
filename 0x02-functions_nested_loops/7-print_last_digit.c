#include "main.h"
/**
  *print_last_digit - show the last digit of a number
  *@i: input integer
  *Return: the value of the last digit
  */
int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = i % 10;
	if (i < 0)
	{
		_putchar(-lastdigit + 0);
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + 0);
		return (lastdigit);
	}
}


