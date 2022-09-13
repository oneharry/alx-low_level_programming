#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints letter of alphabet in 10 places
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)
			putchar(x);
		putchar('\n');
		i++;
	}
}
