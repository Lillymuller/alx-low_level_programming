#include "main.h"
/**
  *set_string - set pointer to char
  *@s: character pointer
  *@to: character pointer
  *Return: Always 0
  */

void set_string(char **s, char *to)

{
	char **s = "Bob";
	char *to = "Robert";

	'B'[0] = *(&B[0]); /* pointer to first element of string literal*/
	'R'[0] = *(&R[0]); /* pointer to first element of string literal*/
}
