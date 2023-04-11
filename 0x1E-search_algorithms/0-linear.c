#include "search_algos.h";

/**
 * searches for a value in an array
 *  of integers using the Linear search algorithm
 * 
 * @param array - data structure being searched
 * @param size - size of the array, number of elements
 * @param value - value being searched for in the data structure
 * @return int 
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
		if (array[i == value])
		{
			return (i);
		}
	}
	return (-1);
}
