#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: If the value is found return the index
 * otherwise If value is not found or array is NULL -1
 */

int jump_search(int *array, size_t size, int value)
{
size_t low, pop, high;

if (array == NULL || size == 0)
return (-1);
high = sqrt(size);

for (low = pop = 0; pop < size && array[pop] < value;)
{
printf("Value checked array[%ld] = [%d]\n", pop, array[pop]);
low = pop;
pop += high;
}

printf("Value found between indexes [%ld] and [%ld]\n", low, pop);

pop = pop < size - 1 ? pop : size - 1;

for (; low < pop && array[low] < value; low++)
printf("Value checked array[%ld] = [%d]\n", low, array[low]);
printf("Value checked array[%ld] = [%d]\n", low, array[low]);
return (array[low] == value ? (int)low : -1);
}
