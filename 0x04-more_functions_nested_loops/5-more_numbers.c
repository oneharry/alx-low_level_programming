#include "main.h"

/**
 * more_numbers - Prints numbers 0-14 in 10 places
 * followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int x;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 14; x++)
		{
			if (x <= 9)
				_putchar(x + '0');
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
