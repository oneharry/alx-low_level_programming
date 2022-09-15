#include "main.h"
#include <stdio.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			printf("FizzBuzz");
		else if (x % 5 == 0)
			printf("Buzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else
			printf("%d", x);
		if (x == 100)
			continue;
		_putchar(' ');
	}

	_putchar('\n');

	return (0);
}
