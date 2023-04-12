#include "search_algos.h"
#include <stdlib.h>

void print_array(int *array, int start, int stop);

/**
 * binary_search - Implementatio of binary sesrch algorithm
 * @array: pointer to the start of an array
 * @size: number of element
 * @value: Searched value
 * Return: index of the first instance of value, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int mid = size / 2;
	int start = 0, stop = size - 1;

	if (array == NULL)
		return (-1);
	while (stop >= start)
	{
		print_array(array, start, stop);
		mid = (start + stop) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			stop = mid - 1;
		} else if (array[mid] < value)
		{
			start = mid + 1;
		}

	}
	return (-1);
}

/**
  * print_array - Prints array of integers
  * @array: pointer to the array
  * @start: starting index of array
  * @stop: Last index of the array
  * Return: void
  */

void print_array(int *array, int start, int stop)
{
	int i = start, x = 0;

	printf("Searching in array: ");
	while (i <= stop)
	{
		if (x > 0)
			printf(", ");
		x = 1;
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}
