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

	while (first <= 23)
	{
		while (last <= 59)
		{
			_putchar((first / 10) + '0');
			_putchar((first % 10) + '0');
			_putchar(':');
			_putchar((last / 10) + '0');
			_putchar((last % 10) + '0');
			_putchar('\n');
			last++;
		}
		first++;
	}
}

