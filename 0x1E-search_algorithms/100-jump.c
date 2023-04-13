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
	size_t step = sqrt(size);
	size_t temp = 0, flag = 0;

	while (step < (size - 1))
	{

		printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
		if (value == array[step])
			return (step);
		if (value < array[step])
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					temp, (temp + step));
			flag = 1;
			break;
		}
		temp = step;
		step += sqrt(size);
	}

	while (flag && temp <= step)
	{
		printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
		if (array[temp] == value)
			return (temp);
		temp++;
	}

	return (-1);
}
