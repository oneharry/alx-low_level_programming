#include "main.h"

/**
 * print_square - Prints a square followed by a newline
 * @size: size argument
 * Return: void
 */

void print_square(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x <= size; x++)
		{
			for (y = 0; y <= size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
