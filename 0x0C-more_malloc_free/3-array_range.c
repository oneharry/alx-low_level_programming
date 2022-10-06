#include "main.h"

/**
  * array_range - creates array of integery
  * @min: minimum value
  * @max: max value in integer array
  * Return: pointer to array memory
  */
int *array_range(int min, int max)
{
	int *arr;
	int x, y;

	if (min > max)
		return (NULL);
	y = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);
	for (x = 0; x < y; x++)
		arr[x] = min++;
	return (arr);
}
