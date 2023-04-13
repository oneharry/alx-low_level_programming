#include "search_algos.h"
#include <stdlib.h>
#include <math.h>

void print_array(int *array, int start, int stop);

/**
 * jump_search - Implementatio of jump sesrch algorithm
 * @array: pointer to the start of an array
 * @size: number of element
 * @value: Searched value
 * Return: index of the first instance of value, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = 0;
	size_t temp = 0;


	if (size == 0 || array == NULL)
		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		temp = step;
		step += sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", temp, (step));

	step = size - 1 > step ? step : size - 1;
	while (temp < step && array[temp] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
		temp++;
	}

	printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);

	if (array[temp] == value)
		return (temp);

	return (-1);
}
