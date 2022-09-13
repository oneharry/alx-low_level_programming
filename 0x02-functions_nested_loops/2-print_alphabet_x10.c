#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
int main(void)
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
	return (0);
}
