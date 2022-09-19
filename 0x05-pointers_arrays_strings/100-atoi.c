#include "main.h"
#include <stdio.h>
/**
 * _atoi - Copy string to another pointer
 * @s: pointer argument
 * Return: integer
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int y = 0;

	while (*s)
	{
		if (*s == '-')
			x = x * -1;
		else if (*s >= '0' && *s <= '9')
			y = (y * 10) + (*s - '0');
		else if (y > 0)
			break;
		s++;
	}
	return (x * y);
}
