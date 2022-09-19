#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints the string passed in
 * @s:string argument
 * Return: void
 */

void _puts(char *s)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
		_putchar(s[x]);
	_putchar('\n');
}
