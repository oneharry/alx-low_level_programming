#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n number of elements of string array element
 * @a: string argument
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int len = _strlen(a);

	if (len >= n)
	{
		int x;

		for (x = 0; x < n; x++)
		{
			_putchar(a[x]);
		}
		_putchar('\n');
	}
}
/**
 * _strlen - returns length os string
 * @s: string argument
 * Return: length of string
 */
int _strlen(int *s)
{
	int counter = 0;

	while (s[counter] != 0)
		counter++;
	return (counter);
}
