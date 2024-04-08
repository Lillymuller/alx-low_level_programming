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
size_t mid = left + (right - left) / 2;

if (right < left)
return (-1); /*Base case: search range empty*/

printf("Searching in array: ");

mid = left;
while (mid <= right)
{
printf("%d", array[mid]);
if (mid < right)
{
/*Add comma for clarity, avoiding trailing comma*/
printf(", ");
}
mid++;
}
printf("\n");

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
size_t left = 0, right = size - 1;
size_t mid;

if (array == NULL || size == 0)
return (-1);

while (left <= right)
{
mid = left + (right - left) / 2;

if (array[mid] == value && (mid == left || array[mid - 1] != value))
{
return (mid);
}
else if (array[mid] >= value)
{
right = mid;
}
else
{
left = mid + 1;
}
}

return (-1); /*Not found*/
}

