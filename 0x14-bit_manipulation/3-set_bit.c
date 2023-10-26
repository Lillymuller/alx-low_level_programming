#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index
 * @n:unsigned long int number
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = (sizeof(unsigned long int) * 8);
	unsigned long face = 1;

	if (index > bits)
		return (-1);

	/* create mask with 1 at index (...00100...) to work on that index */
	face <<= index;
	*n = (*n | face);

	return (1);
}
