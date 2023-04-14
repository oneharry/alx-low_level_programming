#include "search_algos.h"
#include <stdlib.h>
#include <math.h>

/**
  * print_array - Print an array of integers
  * @array: pointer to an array
  * @l: start position
  * @r: end position
  * Return: void
  */

void print_array(int *array, int l, int r)
{
	int i, flag = 0;

	printf("Searching in array: ");
	for (i = l; i < r; i++)
	{
		if (flag)
			printf(", ");
		flag = 1;
		printf("%d", array[i]);
	}
	printf("\n");
}


/**
  * bin_search - Implementation of binary search
  * @array: pointer to the array
  * @l: start point of the array
  * @r: stop point of the array
  * @value: integer value to be searched
  * Return: index of the value
  */
int bin_search(int *array, int l, int r, int value)
{
	int mid;

	while (r > l)
	{
		print_array(array, l, r + 1);
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Implementatio of exponential sesrch algorithm
 * @array: pointer to the start of an array
 * @size: number of element
 * @value: Searched value
 * Return: index of the first instance of value, -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int temp;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	temp = bound < size ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%d]\n", bound / 2,
			temp);

	return (bin_search(array, (bound / 2), temp, value));
}
