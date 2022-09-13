#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints the last digit of a number
* Return: void
 */
void times_table(void)
{
	int x, y, num;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			num = x *  y;
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			} else
			{
				_putchar(num + '0');
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

