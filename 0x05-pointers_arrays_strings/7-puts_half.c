#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints second half of string array element
 * @s:string argument
 * Return: void
 */

void puts_half(char *s)
{
	int len = _strlen(s);
	int x, i;


	if (len % 2 == 0)
		i = len / 2;
	i = (len + 1) / 2;
	for (x = i; x <= len - 1; x++)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
/**
 * _strlen - returns length os string
 * @s: string argument
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != 0)
		counter++;
	return (counter);
}
