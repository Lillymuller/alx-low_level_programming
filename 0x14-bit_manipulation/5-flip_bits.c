#include "main.h"

/**
 * flip_bits - number of bits you to flip to get from one number to another
 * @n: unsigned long int number1
 * @m: unsigned long int number2
 * Return: diffrent numbers amount
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_num = 0;
	unsigned long int diff;

	/* XOR both nums to output 1 if n and m different bits */
	diff = n ^ m;

	do {
		flip_num = flip_num + (diff & 1);
		diff >>= 1;
	} while
		(diff > 0);

	return (flip_num);
}
