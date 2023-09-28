#include "main.h"

/**
 * root - helps sqrt function find sqrt
 * @n: needs to be sqrt
 * @x: sqrt of n
 * Return: natural sqrt of n
 */

int root(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (root(n, ++x));
	return (-1);
}

/**
 * _sqrt_recursion - get the natural sqrt of n
 * @n: integer
 * Return: natural sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (root(n, 0));
}
