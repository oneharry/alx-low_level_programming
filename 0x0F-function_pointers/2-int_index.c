#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: pointer to an array of integers
  * @size: number of elements
  * @cmp: functiont pointer that searches for element
  * Return: the index of the searched number
  */
int int_index(int *array, int size, int(*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);
	for (x = 0; x <= size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
