#include "search_algos.h"
/**
 * linear_search - Searches for a data i array
 * @array:  A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search
 * Return: If the value is found must return the index, if not -1
 */

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
{
return (-1);
}

while (i < size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
i++;
}

return (-1);
}
