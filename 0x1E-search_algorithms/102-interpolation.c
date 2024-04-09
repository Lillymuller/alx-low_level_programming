#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: If value found return index
 * otherwise if value not fund and array is NULL -1
 */

int interpolation_search(int *array, size_t size, int value)
{
size_t i, low = 0, high = size - 1;

if (array == NULL)
return (-1);

while (high >= low)
{
i = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
if (i < size)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
else
{
printf("Value checked array[%ld] is out of range\n", i);
break;
}

if (array[i] == value)
return (i);
if (array[i] > value)
high = i - 1;
else
low = i + 1;
}
return (-1);
}
