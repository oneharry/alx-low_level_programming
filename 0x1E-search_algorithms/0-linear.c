#include "search_algos.h"

/**
 * linear_search - Implementatio of linear sesrch algorithm
   * @array: pointer to the start of an array
   * @size: number of element
   * @value: Searched value
   * Return: index of the first instance of value, -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (array[i] && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
