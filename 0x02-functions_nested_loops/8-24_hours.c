#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Prints the last digit of a number
* Return: void
 */
void jack_bauer(void)
{
	int first = 0;
	int last = 0;

	for (first = 0; first <= 23; first++)
	{
		for (last = 0; last <= 59; last++)
		{
			_putchar((first / 10) + '0');
			_putchar((first % 10) + '0');
			_putchar(':');
			_putchar((last / 10) + '0');
			_putchar((last % 10) + '0');
			_putchar('\n');
		}
	}
}

