#include "main.h"

/**
 * __strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int __strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * first_idx_starts - find the first indx of a string
 * @s: string to search
 * Return: integer index where digit first found, -1 if not
 */

int first_idx_starts(char *s)
{
	int i;

	for (i = 0; i < __strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1);
}

/**
 * find_sign - determine if integer is negative
 * @s: integer
 * Return: integer 1 or -1
 */
int find_sign(char *s)
{
	int negatives = 0, i = 0, sign = 1;

	while (i < (first_idx_starts(s)))
	{
		if (s[i++] == '-')
			negatives++;
	}

	if (negatives % 2 != 0)
		sign = -1;

	return (sign);
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{

	int idx_digit_starts = (first_idx_starts(s));
	int sign;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (first_idx_starts(s));

	if (idx_digit_starts < 0)
		return (0);

	sign = find_sign(s);

	while ((s[idx_digit_starts] >= '0' && s[idx_digit_starts] <= '9')
	       && (idx_digit_starts <= __strlen(s))) /* count digits to print */
	{
		digits_to_print += 1;
		idx_digit_starts++;
	}

	i = 1;
	while (i < digits_to_print) /* find powers of ten to multiply places */
	{
		t *= 10;
		i++;
	}

	for (i = digit; i < (digit + digits_to_print); i++)
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);
}
