#include "main.h"

/**
 * print_triangle - print backwards triangle of n size
 * @size: size of square
 */

void print_triangle(int size)
{
int x, y, k, n, s;
n = 1;
s = size;
if (size <= 0)
_putchar('\n');
for (y = 0; y < size; y++)
{
for (x = 0; x < (s - 1); x++)
_putchar(' ');
for (k = 0; k < n; k++)
_putchar('#');
_putchar('\n');
s--;
n++;
}
}
