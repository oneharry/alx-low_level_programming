#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Return the sum of two numbers
 * @x: the integer of starting point to print
* Return: void
 */
int print_to_98(int x)
{
	if (x > 98)
	{
		while (x > 98)
			printf("%d", x);
	} else if (x < 98)
	{
		while (x < 98)
			printf("%d", x);
	} else
	{
		printf("%d", x);
	}

	return (sum);
}

