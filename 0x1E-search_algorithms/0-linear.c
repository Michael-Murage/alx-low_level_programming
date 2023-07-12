#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 *                 integers using the Linear search algorithm
 *
 * @array: data structure being searched
 * @size: size of the array, number of elements
 * @value: value being searched for in the data structure
 * Return: index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
