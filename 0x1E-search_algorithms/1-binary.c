#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: if Array is Null or Value not found -1.
 * otherwise return the index of the value found
 */

int binary_search(int *array, size_t size, int value)
{
size_t mid, l = 0, r = size -1;

if (array == NULL)
return (-1);

while (r >= l)
{
printf("Searching in array: ");
for (mid = l; mid < r; mid++)
printf("%d, ", array[mid]);
printf("%d\n", array[mid]);

mid = l + (r - l) / 2;
if (array[mid] == value)
return (mid);

if (array[mid] > value)
r = mid - 1;
else
l = mid + 1;
}

return (-1);
}
