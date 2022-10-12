#include "function_pointers.h"

/**
  * array_iterator - iterate and execute a function on array element
  * @array: The array parameter
  * @size: array size
  * @action: function parameter
  * Return: void
  */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
