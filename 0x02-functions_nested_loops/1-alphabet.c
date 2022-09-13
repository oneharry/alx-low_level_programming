#include <stdio.h>
#include "main.h"
/**
 * print_alphabet -prints aall letters of the alphabet
 * Return: No return value, since function is of type void
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
