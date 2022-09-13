#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Prints the last digit of a number
* Return: void
 */
void jack_bauer(void)
{
	int first = last = 00;

	for (first = 00; first <= 23; first++)
	{
		while (last <= 59)
		{
			_putchar('0' + first);
			_putchar(':');
			_putchar('0' + last);
			last++;
		}
	}
}

