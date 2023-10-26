#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/* 4 byte int hold some hex number 0x00000001 */
	/* test if first byte stored is 00 or 01 */
	/* big endian stores 00, little stores 01 */

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
