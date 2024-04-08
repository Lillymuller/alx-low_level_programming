#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @left: A pointer for the first index in array
 * @value: The value to search for
 * @right: Apointer for the end index of array
 * Return: if value found return index
 * otherwise if value not found and array NULL -1
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t mid;

if (array == NULL)
{
return (-1);
}

while (left <= right)
{
/*Calculate middle index*/
mid = left + (right - left) / 2;

if (array[mid] == value)
{
return (mid);
}
else if (array[mid] > value)
{
right = mid - 1;
}
else
{
left = mid + 1;
}
}
return (-1);
}


/**
 * exponential_search - Searches for a value in a sorted array
 * @array: A Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index where the value is located
 * otherwise -1 if not found or array is NULL.
 */

int exponential_search(int *array, size_t size, int value)
{
size_t i, r;

if (array == NULL)
{
return (-1);
}

/*Handle edge case where value is the first element*/
if (array[0] == value)
return (0);

i = 1;  /*Start with power of 2 for exponential search*/

while (i < size && array[i] <= value)
{
i *= 2;  /* Double the search range in each iteration */

printf("Value checked array[%ld] = [%d]\n", i - 1, array[i - 1]);
}

/*Reduce search range to a sub-array based on the last checked index*/
r = i < size ? i - 1 : size - 1;

printf("Value found between indexes [%ld] and [%ld]\n", r / 2, r);
return (_binary_search(array, r / 2, r, value));
/*Call binary search on the narrowed range*/
}
