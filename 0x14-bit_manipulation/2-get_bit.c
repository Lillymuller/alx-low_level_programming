#include "main.h"

/**
 * get_bit - unction that returns the value of a bit at a given index
 * @n: unsigned long int number
 * @index: starting from 0 of the bit you want to ge
 * Return: the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitt;
	unsigned int max = (sizeof(unsigned long int) * 8); /* allocating memory */

	if (index > max)
		return (-1);

	bitt = ((n >> index) & 1);

	return (bitt);
}
