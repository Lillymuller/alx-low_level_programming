#include "main.h"

/**
 * print_binary - a function  convert numbers to binary
 * @n: unsigned numbers
 * Return: binary numbers
 */
void print_binary(unsigned long int n)
{

	unsigned long int num_cpy = n, Adu = 1;
	int input_len = 0;

	while (num_cpy > 0)
	{
		input_len += 1;
		num_cpy >>= 1;
	}
	input_len--;

	if (input_len > 0) /* create mask based on length of num */
		Adu = Adu << input_len;

	while (Adu > 0) /* compare the  binary to see if 1 or 0 */
	{
		if (n & Adu)
			_putchar('1');
		else
			_putchar('0');

		Adu >>= 1;
	}
}

