#include "main.h"

/**
 * print_square - Prints a square followed by a newline
 * @size: size argument
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
			if (x == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
