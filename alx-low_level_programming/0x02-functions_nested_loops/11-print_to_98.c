#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Return the sum of two numbers
 * @x: the integer of starting point to print
* Return: void
 */
void print_to_98(int x)
{
	if (x >= 98)
	{
		while (x > 98)
			printf("%d, ", x--);
		printf("%d\n", x);
	} else
	{
		while (x < 98)
			printf("%d, ", x++);
		printf("%d\n", x);
	}
}
