#include "main.h"

/**
 * print_triangle - Prints a square followed by a newline
 * @size: size argument
 * Return: void
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
				_putchar(' ');
			for (y = 0; y < x; y++)
				_putchar('#');

			if (x == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
