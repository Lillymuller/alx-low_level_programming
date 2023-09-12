#include "main.h"
/**
  *print_last_digit - show the last digit of a number
  *@i: input integer
  *Return: the value of the last digit
  */
int print_last_digit(int i)
{
i %= 10;
if (i < 0)
i *= -1;
i += 48;
_putchar(i);
return (i - '0');
}
