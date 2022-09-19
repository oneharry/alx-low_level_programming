#include "main.h"
#include <stdio.h>
/**
 * _atoi - Copy string to another pointer
 * @s: pointer argument
 * Return: integer
 */

int _atoi(char *s)
{
	int x, num;

	for (x = 0; s[x]; x++)
		num *= s[x] - '0';
	return (num);
}
