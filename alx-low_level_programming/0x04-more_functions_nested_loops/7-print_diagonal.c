#include "main.h"

/**
 * print_diagonal - Prints n numbers of \ character
 * @n: n argument
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');
			_putchar('\\');

			if (x == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
