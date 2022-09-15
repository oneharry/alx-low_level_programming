#include "main.h"
#include <stdio.h>

/**
 * main - Print the prime factor of a number
 * Return: 0
 */

int main(void)
{
	long int x = 612852475143;
	long int y;

	while (y < (prime / 2))
	{
		if ((x % 2) == 0)
		{
			x = x / 2;
			continue
		}

		for (y = 3; y < (x / 2); y +=2)
		{
			if ((x % y) == 0)
				x /= x
		}
	}
	printf("%ld\n", x);

	return (0);
}
