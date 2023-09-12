#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - count to 98
 * @n: variable to determine if input is greater than, less than or is 98
 *
 */
void print_to_98(int n)
{

	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
