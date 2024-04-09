#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches for a value in a sorted array
 * using binary search (recursive).
 * @array: Pointer to the first element of the sub-array to search.
 * @left: Starting index of the sub-array.
 * @right: Ending index of the sub-array.
 * @value: The value to search for.
 *
 * Return: Index where the value is located, or -1 if not found or at edges.
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
size_t mid;

if (left > right)
return (-1); /*Base case: search range empty*/

printf("Searching in array: ");
for (mid = left; right > mid; mid++)
{
printf("%d, ", array[mid]);
}
printf("%d\n", array[mid]);

mid = left + (right - left) / 2;
/*Check if value found and avoid duplicates to the left (first occurrence)*/
if (array[mid] == value && (mid == left || array[mid - 1] != value))
return (mid);

if (array[mid] >= value)
{
return (advanced_binary_recursive(array, left, mid, value));
}
else
{
return (advanced_binary_recursive(array, mid + 1, right, value));
}
}


/**
 * advanced_binary - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index where the value is located (first occurrence)
 * otherwise -1 if not found or array is NULL/empty.
 */

int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (advanced_binary_recursive(array, 0, size - 1, value));

}

