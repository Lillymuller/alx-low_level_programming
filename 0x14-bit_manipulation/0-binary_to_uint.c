#include "main.h"

/**
 * binary_to_uint - a function convert binary to unsigned int
 * @b: string of 0 and 1
 * Return: converted binary to  unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int str_length = 0;
	int n;
	unsigned int add = 0;

	if (b == NULL) /* if the char is not 1 0r 0 b is null */
		return (add);

	 while (b[str_length] != '\0')
		str_length += 1;
	str_length--;

	/* get power of 2 via binary (e.g. 1<<2 = 100 in binary = 4) */
	n = 0;
	while (b[n])
	{
		if ((b[n] != '0') && (b[n] != '1'))
			return (add);

		if (b[n] == '1')
			add = add + (1 * (1 << str_length));
		n++;
		str_length--;
	}

	return (add);
}
