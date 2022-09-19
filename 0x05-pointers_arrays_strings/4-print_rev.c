#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints the string passed in reverse form
 * _strlen - Returns the length of string
 * @s:string argument
 * _strlen - returns the length of the string
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int x;

	for (x = len - 1; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
/**
 * _strlen - Returns length of string
 * @s: string argument
 * Return: Returns lenght of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != 0)
		counter++;
	return (counter);
}
