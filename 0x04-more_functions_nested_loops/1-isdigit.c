#include "main.h"
/**
  *_isdigit - check for a digit
  *@c: is a digit
  * Return: 1 for digit and 0 if not
  */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
	return (1);
}
return (0);
}
