#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints the string passed in reverse form
 * @s:string argument
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int x;

	for (x = len - 1; x >=0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
int _strlen(char *s)
{
	int counter = 0;
	while (s[counter] != 0)
		counter++;
	return (counter);
}
