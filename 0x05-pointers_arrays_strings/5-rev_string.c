#include "main.h"
#include <stdio.h>
/**
 * rev_string - Prints the string passed in reverse form
 * @s:string argument
 * Return: void
 */

void rev_string(char *s)
{
	char hold;
	int len = _strlen(char s) - 1;
	int x = 0;

	for (x = 0; x < len ; x++)
	{
		hold = s[x];
		s[x] = s[len];
		s[len] = hold;
		len++;
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
