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
	int jump = sqrt(size);
	int temp, flag = 0;
	size_t i;

	for (i = 0; i < size; i += jump)
	{
		temp = i;

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[temp] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, (i + jump));
			temp = i;
			jump = i + jump;
			flag = 1;
			break;
		}
	}

	while (flag && array[temp] < value)
	{
		printf("Value checked array[%d] = [%d]\n", temp, array[temp]);
		printf("HH %d = %d\n", temp, value);
		temp++;
	}
	if (array[temp] == value)
		return (temp);

	return (-1);
}
