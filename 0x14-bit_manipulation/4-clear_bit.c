#include "main.h"

/**
 * clear_bit -  function sets the value of a bit to 0 at a given index
 * @n: unsigned long int number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = (sizeof(unsigned long int) * 8);
	unsigned long int face = 1;

	if (index > bits)
		return (-1);

	/* create mask with 0 at index (...11011...) to work on that index */
	face = ~(face << index);
	*n = (*n & face);

	return (1);
}
