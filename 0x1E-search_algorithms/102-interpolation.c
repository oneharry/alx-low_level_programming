#include "search_algos.h"
#include <stdlib.h>
#include <math.h>

void print_array(int *array, int start, int stop);

/**
 * interpolation_search - Implementatio of interpolation sesrch algorithm
 * @array: pointer to the start of an array
 * @size: number of element
 * @value: Searched value
 * Return: index of the first instance of value, -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos;

	while (high > low && (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high]
				- array[low])) * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
	}

	if (array[pos] == value)
		return (pos);
	printf("Value checked array[%d] is out of range\n", array[size]);
	return (-1);
}
